# 📝 LoggerProject - Singleton Pattern in C++

This project demonstrates the use of the **Singleton Design Pattern** through a simple yet practical **Logger system**. The logger ensures that only one instance handles all logging operations, maintaining a centralized and consistent logging mechanism across an application.

---

## 🧠 Design Pattern Used

### 🧩 Singleton Pattern

- Guarantees that only **one instance** of the `Logger` class exists.
- Provides a **global access point** to this instance.
- Handles internal synchronization with `std::mutex` for thread safety.

---

## 🧪 Project Overview

The `Logger`:
- Writes logs to a file (`logs.txt`)
- Supports log levels: `Info`, `Warning`, `Error`
- Formats messages with timestamps and log level indicators
- Is accessible globally via `Logger::getInstance()`

---

## 🗂️ File Structure
LoggerProject/
├── Logger.h # Logger class declaration
├── Logger.cpp # Logger class definition
├── main.cpp # Example usage of the Logger
└── logs.txt # Output log file (auto-created)

---

## 🚀 How to Build and Run

### ✅ Compile and Run

```bash
cd cpp-design-patterns/Creational/Singleton/LoggerProject/
make
./logger
