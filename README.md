# Object-Oriented Programming (OOP) Principles in C++

Welcome to the **Object-Oriented Programming Principles in C++** repository! This repository is a comprehensive collection of examples, explanations, and code snippets demonstrating the core concepts of OOP using the C++ programming language. It is designed to be a practical resource for students, educators, and developers aiming to understand and implement OOP in C++ effectively.

# Stephen Oloo - " The Pursuit For Greatness Is Arguably The Most Painful Journey 💔. What I Ask Is: Is It Worth It?"

*My Answer Has Always Kept Me Going, I Guess Yours Might Do so As Well.*

---

## Table of Contents
1. [Introduction](#introduction)
2. [OOP Principles](#oop-principles)
   - [Encapsulation](#1-encapsulation)
   - [Abstraction](#2-abstraction)
   - [Inheritance](#3-inheritance)
   - [Polymorphism](#4-polymorphism)
3. [Project Structure](#project-structure)
4. [How to Use](#how-to-use)
5. [Requirements](#requirements)
6. [Contributing](#contributing)
7. [License](#license)

---

## Introduction

Object-Oriented Programming (OOP) is a fundamental paradigm in software development. It provides a structured and modular approach to writing reusable and maintainable code. This repository focuses on breaking down the core OOP principles in C++ with real-world examples and clear explanations.

---

## OOP Principles

### 1. Encapsulation
Encapsulation is the bundling of data (variables) and methods (functions) that operate on the data into a single unit, typically a class. It also involves restricting access to certain details to protect the data from unauthorized interference.

- **Example:**  
  ```cpp
  class BankAccount {
  private:
      double balance;
  public:
      BankAccount(double initialBalance) : balance(initialBalance) {}
      void deposit(double amount) { balance += amount; }
      double getBalance() const { return balance; }
  };
  ```

### 2. Abstraction
Abstraction simplifies complex systems by modeling classes appropriate to the application domain while hiding implementation details.

- **Example:**  
  ```cpp
  class Shape {
  public:
      virtual void draw() const = 0; // Pure virtual function
      virtual ~Shape() {}
  };

  class Circle : public Shape {
  public:
      void draw() const override { std::cout << "Drawing Circle" << std::endl; }
  };
  ```

### 3. Inheritance
Inheritance allows a class (child) to inherit the attributes and methods of another class (parent), promoting code reuse.

- **Example:**  
  ```cpp
  class Animal {
  public:
      void eat() { std::cout << "Eating..." << std::endl; }
  };

  class Dog : public Animal {
  public:
      void bark() { std::cout << "Barking..." << std::endl; }
  };
  ```

### 4. Polymorphism
Polymorphism allows the same function to behave differently for different objects. This is commonly achieved through function overriding and virtual functions.

- **Example:**  
  ```cpp
  class Shape {
  public:
      virtual void draw() const { std::cout << "Drawing Shape" << std::endl; }
  };

  class Rectangle : public Shape {
  public:
      void draw() const override { std::cout << "Drawing Rectangle" << std::endl; }
  };
  ```

---

## Project Structure

```plaintext
OOP-Principles-Cpp/
│
├── Encapsulation/
│   ├── encapsulation_example1.cpp
│   ├── encapsulation_example2.cpp
│
├── Abstraction/
│   ├── abstraction_example1.cpp
│   ├── abstraction_example2.cpp
│
├── Inheritance/
│   ├── inheritance_example1.cpp
│   ├── inheritance_example2.cpp
│
├── Polymorphism/
│   ├── polymorphism_example1.cpp
│   ├── polymorphism_example2.cpp
│
├── README.md
└── LICENSE
```

---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/OOP-Principles-Cpp.git
   ```
2. Navigate to the directory:
   ```bash
   cd OOP-Principles-Cpp
   ```
3. Compile and run examples using a C++ compiler:
   ```bash
   g++ -o output_file_name file_name.cpp
   ./output_file_name
   ```

---

## Requirements

- A C++ compiler (e.g., `g++` or MSVC).
- Basic knowledge of C++ syntax.

---

## Contributing

We welcome contributions! If you'd like to enhance this repository, feel free to fork it, make your changes, and submit a pull request. Contributions can include:

- Adding new examples.
- Improving explanations or code comments.
- Fixing bugs.

---

## License

This repository is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute this code as per the license terms.

---

Happy coding! If you have any questions or feedback, feel free to open an issue or reach out.
