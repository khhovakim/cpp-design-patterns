#ifndef  __LOGGER_H__
# define __LOGGER_H__

# include <fstream>   // For std::ofstream
# include <mutex>     // For std::mutex
# include <string>    // For std::string

# include "logType.h" // For LogType

class Logger {
    // --- Singleton Design Pattern ---
public:
    static Logger* getLogger(); 
    static void destroyLogger();

public:
    // --- Public Methods ---
    void log(const std::string& message, LogType type = LogType::Info);

private:
    // --- Private Constructor/Destructor ---
    Logger();
    ~Logger();

    // --- Private Copy Constructor/Assignment Operator ---
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // --- Private move Constructor/Assignment Operator ---
    Logger(Logger&&) = delete;
    Logger& operator=(Logger&&) = delete;

private:
    static Logger*    m_logger;  // Singleton instance
    static std::mutex m_mtx;     // Mutex for thread safety
    std::ofstream     m_logFile; // Log file stream
};

#endif   // __LOGGER_H__