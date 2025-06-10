# 🏭 DocFactory — Factory Method Pattern (C++)

This project demonstrates the **Factory Method** design pattern using a simple document generation system (PDF, Word).

## 🧠 Pattern Roles

- **Product Interface**: `Document`
- **Concrete Products**: `PDFDocument`, `WordDocument`
- **Creator Interface**: `DocumentCreator`
- **Concrete Creators**: `PDFDocumentCreator`, `WordDocumentCreator`

---

## 🗂️ File Structure
- `DocFactory/`
  - `include/DocumentCreator/*`  – Document Creator types
  - `include/DocumentType/`      – Document Creator types
  - `obj/*`                      – Object files (auto-created)
  - `main.cpp`                   – Example usage of the Logger
  - `Makefile`                   – Automating program Compilation

---

## 🚀 How to Build and Run

### ✅ Compile and Run

```bash
cd cpp-design-patterns/Creational/FactoryMethod/DocFactory
make
./docfactory 
