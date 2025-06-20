# 🍕 PizzaKitFactory — Abstract Factory Pattern in C++

This project demonstrates the **Abstract Factory** design pattern by building pizzas from regional ingredient kits (e.g., New York or Chicago style).

Each region has its own factory that produces related **ingredients**: dough, sauce, and cheese. The `Pizza` class uses these factories to assemble a full pizza.

---

## 🧠 Pattern Used: Abstract Factory

> "Provide an interface for creating families of related or dependent objects without specifying their concrete classes."  
> — *Gang of Four (GoF)*

---

## 🚀 How to Build & Run
```bash
cd Creational/AbstractFactory/PizzaKitFactory
make
./pizza_factory
