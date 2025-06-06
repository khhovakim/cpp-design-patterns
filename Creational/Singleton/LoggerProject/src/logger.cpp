#include "logger.h"

#include <fstream>   // For std::ofstream
#include <string>    // For std::string
#include <mutex>     // For std::mutex, std::lock_guard
#include <stdexcept> // For std::runtime_error
#include <iomanip>   // For std::put_time
#include <ctime>     // For std::time_t, std::time, std::localtime

#include "logType.h" // For LogType, logTypeToString, logTypeToColor

Logger*    Logger::m_logger { nullptr };
std::mutex Logger::m_mtx;

namespace {
    const char* const LOG_FILE_PATH = "log.txt";
}

Logger::Logger() : m_logFile(LOG_FILE_PATH, std::ios::out | std::ios::app) {
    if ( !m_logFile.is_open() ) {
        throw std::runtime_error("Failed to open log file");
    }
}

Logger::~Logger() {
    if ( m_logFile.is_open() ) {
        m_logFile.close();
    }
}

Logger* Logger::getLogger() {
    std::lock_guard<std::mutex> lock { m_mtx };
    if  ( m_logger == nullptr ) {
        m_logger = new Logger();
    }

    return m_logger;
}

void Logger::destroyLogger() {
    std::lock_guard<std::mutex> lock { m_mtx };
    if ( m_logger != nullptr ) {
        delete m_logger;
        m_logger = nullptr;
    }
}

void Logger::log(const std::string& message, LogType type) {
    std::lock_guard<std::mutex> lock { m_mtx };

    if ( !m_logFile.is_open() ) {
        throw std::runtime_error("Log file is not open");
    }

    std::time_t now     = std::time(nullptr);
    std::tm* localTime  = std::localtime(&now);
    if ( localTime == nullptr ) {
        throw std::runtime_error("Failed to get local time");
    }

    m_logFile << "[" << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << "] "
              << "[" << logTypeToString(type) << "] " << message << std::endl;
}
