#ifndef  __LOG_TYPE_H__
# define __LOG_TYPE_H__

// Enum class for log types
enum class LogType {
    Info,
    Warning,
    Error
};

// Function to map LogType to string representations
inline const char* logTypeToString(LogType type) noexcept {
    switch (type) {
        case LogType::Info:    return "INFO";
        case LogType::Warning: return "WARNING";
        case LogType::Error:   return "ERROR";
        default:               return "UNKNOWN";
    }
}

#endif   // __LOG_TYPE_H__