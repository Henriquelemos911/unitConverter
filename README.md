# Unit Converter

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) 
![C++](https://img.shields.io/badge/C%2B%2B-Programming-orange.svg)  ![OOP](https://img.shields.io/badge/Object--Oriented%20Programming-green.svg)


## Features

- Convert units in Distance, Temperature, and Weight categories.
- Clean and modular code using classes and separate files.
- Easy compilation using either `g++` or `CMake`.
- Works on Linux and Windows (via MinGW).

## Technologies Used

- C++ (Standard Library)
- g++ Compiler
- CMake

## How to Compile and Run

### On Linux

1. Make sure you have g++ installed:
   ```bash
   sudo apt update
   sudo apt install g++
   ```

2. Navigate to the project folder:
   ```bash
   cd /path/to/unitConverter
   ```

3. Compile using g++:
   ```bash
   g++ -Iinclude main.cpp src/DistanceConverter.cpp src/TemperatureConverter.cpp src/WeightConverter.cpp -o bin/main
   ```

4. Run the program:
   ```bash
   ./bin/main
   ```

### On Windows (MinGW)

1. Install MinGW and add it to your system PATH.

2. Open the Command Prompt and navigate to your project folder:
   ```cmd
   cd C:\path\to\unitConverter
   ```

3. Compile using g++:
   ```cmd
   g++ -Iinclude main.cpp src\DistanceConverter.cpp src\TemperatureConverter.cpp src\WeightConverter.cpp -o bin\main.exe
   ```

4. Run the program:
   ```cmd
   bin\main.exe
   ```

## Example Usage

```text
Enter the value to convert: 100
Select the unit to convert from: meters
Select the unit to convert to: kilometers
Result: 0.1 kilometers
```

---

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
