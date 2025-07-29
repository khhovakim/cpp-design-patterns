# 🧬 Prototype Pattern – C++ Example

This is a simple C++ project demonstrating the **Prototype Design Pattern** using a game character cloning system. It is part of a series of C++ design pattern implementations.

---

## 📚 What is the Prototype Pattern?

The **Prototype Pattern** is a creational design pattern that allows you to copy existing objects without depending on their concrete classes. It is useful when object creation is expensive or when complex initialization is needed.

---

## 🎮 Project Overview

This project includes three game character types:

- 🗡️ **Warrior**
- 🏹 **Archer**
- 🔮 **Mage**

Each character implements a `clone()` method that allows creating a copy of itself.

---


## 🛠️ Build and Run

### 🔹 Prerequisites

- C++17 compatible compiler (`clang++`)
- `make`

### 🔹 Compile

```bash
make
make run