# Adapter Pattern (Structural)

## 📖 Intent
> Convert the interface of a class into another interface clients expect.  
> The Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

---

## 📝 Motivation
Imagine you have an old printer class with a method `oldPrint()` but your new system expects any printer to have a method `print()`.  
Changing the old printer's code might be impossible (e.g., it's from a library).  
The **Adapter** acts as a middleman, translating `print()` calls into `oldPrint()` calls.

---

## 💡 Applicability
Use the Adapter pattern when:
- You want to use an existing class but its interface is not compatible with what you need.
- You want to create a reusable class that cooperates with unrelated or unforeseen classes.

---

## 🛠️ Build and Run

### 🔹 Prerequisites

- C++17 compatible compiler (`clang++`)
- `make`

### 🔹 Compile

```bash
make
make run