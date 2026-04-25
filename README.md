# 🔗 URL Shortener Service (C++)

## 📌 Overview
This project is a **URL Shortener Service** implemented in **C++** using Object-Oriented Programming (OOP) and the standard library only.

It converts long URLs into short, readable links and allows retrieving the original URL using the generated short code.

The project is **CLI-based** and follows a modular software design.

---

## 🎯 Features

- 🔹 Shorten long URLs into compact links  
- 🔹 Resolve short URLs back to original URLs  
- 🔹 Prevent duplicate URL entries  
- 🔹 Persistent storage using file system  
- 🔹 URL validation  
- 🔹 Human-readable short links  
- 🔹 Modular OOP architecture  

---

## 🧠 System Architecture

The system follows a layered architecture:

- **Presentation Layer:** CLI Interface  
- **Business Logic Layer:** URLShortener  
- **Utility Layer:** URLValidator + CodeGenerator  
- **Persistence Layer:** Storage (File System)

---

## 🧩 Components

### 1. URLValidator
Validates input URLs to ensure they are correct and non-empty.

### 2. CodeGenerator
Generates short, readable codes based on:
- Domain detection (e.g., youtube → yt, facebook → fb)
- Hash-based unique ID

### 3. Storage
Handles persistent storage using file system and maps:
- `unordered_map<string, string>`

### 4. URLShortener
Core logic that connects all components together.

---

## 🔄 System Flow

### 🔹 Shortening Process
1. User inputs long URL  
2. Validate URL  
3. Check if URL already exists  
4. Generate short code  
5. Save mapping in storage  
6. Return short URL  

### 🔹 Resolving Process
1. User inputs short URL  
2. Extract short code  
3. Search in storage  
4. Return original URL  

---

## 🗃️ Data Storage Format

Data is stored in a text file:

### Example:
yt/abc | https://youtube.com/watch?v=abc


---

## 🧪 Testing

Test cases include:

- ✅ Valid URL → successfully shortened  
- ❌ Invalid URL → error message displayed  
- 🔁 Duplicate URL → returns same short code  
- ❓ Unknown short URL → returns NOT_FOUND  

---

## ⚙️ Build & Run

### 🔨 Compile
```bash
g++ main.cpp URLShortener.cpp URLValidator.cpp CodeGenerator.cpp Storage.cpp -o app

▶️ Run
Windows:
.\app.exe
Linux / Mac:
./app

📌 Requirements
C++ (Standard Library only)
No external libraries or frameworks
CLI-based application

🏗️ Design Principles
Object-Oriented Programming (OOP)
Separation of Concerns
Modular Architecture
File-based persistence
Efficient lookup using unordered_map

🚀 Future Improvements
Base62 encoding for shorter IDs
REST API version
Web interface (optional extension)
Database integration instead of file storage
👩‍💻 Author
Developed as a Software Engineering project using C++ and OOP principles.

⭐ License

This project is for educational purposes only.