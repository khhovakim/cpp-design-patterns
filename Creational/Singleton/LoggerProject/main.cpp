#include <thread> // For std::thread
#include <vector> // For std::vector
#include <string> // For std::string

#include "logger.h" // For Logger

void logFromThread(int id) {
    Logger* logger = Logger::getLogger();
    logger->log("Thread " + std::to_string(id) + " started", LogType::Info);
    logger->log("Thread " + std::to_string(id) + " did some work", LogType::Warning);
    logger->log("Thread " + std::to_string(id) + " encountered an error", LogType::Error);
}

int main() {
    const int threadCount { 5 }; // Number of threads to create
    Logger::getLogger()->log("Starting the logger", LogType::Info);
    std::vector<std::thread> threads;

    for (int i = 0; i < threadCount; ++i) {
        threads.emplace_back(logFromThread, i + 1);
    }

    for (auto& t : threads) {
        t.join();
    }

    Logger::getLogger()->log("All threads have finished", LogType::Info);
    // Logger::getLogger()->destroyLogger();
    return 0;
}
