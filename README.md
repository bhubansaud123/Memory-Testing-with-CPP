# Memory Game using C++

This project implements a **simple memory-based guessing game** using **Object-Oriented Programming (OOP) concepts in C++**.
The player guesses a number, and the score increases if the guess matches any stored number.

---

## 📌 Objective

To understand and implement:
- Classes and objects
- STL `vector`
- Basic game logic
- Input/output handling in C++

---

## 🧠 Concepts Used

- Class and Object  
- Constructor initialization  
- Encapsulation  
- Standard Template Library (STL)  
- `vector` container  
- `const` member function  

---

## 🧾 Program Description

- The `MemoryGame` class stores a list of numbers using a `vector`
- The constructor initializes the numbers and score
- The `play()` function takes user input and checks for a match
- The `showScore()` function displays the player's score
- The game rewards correct guesses

---

## 🧩 Class Structure

### Class: `MemoryGame`
- **Data Members**
  - `vector<int> numbers`
  - `int score`
- **Member Functions**
  - `MemoryGame()` → Constructor  
  - `void play()`  
  - `void showScore() const`  

---

## ▶️ Sample Input

