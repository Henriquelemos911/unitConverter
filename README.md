
# Unit Converter

## 🚀 Features

- Converts units of Distance, Temperature, and Weight.
- Organized code across multiple C++ files.
- Easy compilation using g++ either via VS Code tasks or manually through the terminal.

## 🧑‍💻 Technologies Used

- C++ (iostream, etc.)
- g++ Compiler
- GDB Debugger (for VS Code users)

## 📋 How to Run

### 🐧 On Linux:

1. Make sure g++ is installed:
   ```
   sudo apt update
   sudo apt install g++
   ```

2. Navigate to the project folder:
   ```
   cd /path/to/your/project
   ```

3. Compile using the command:
   ```
   g++ -Iinclude main.cpp src/DistanceConverter.cpp src/TemperatureConverter.cpp src/WeightConverter.cpp -o bin/main
   ```

4. Run the program:
   ```
   ./bin/main
   ```

### 🪟 On Windows (with MinGW):

1. Install MinGW and add it to your system PATH.  
   (If you don't have it, download from: https://www.mingw-w64.org/)

2. Open CMD or PowerShell.

3. Navigate to the project folder:
   ```
   cd C:\path\to\your\project
   ```

4. Compile using:
   ```
   g++ -Iinclude main.cpp src/DistanceConverter.cpp src/TemperatureConverter.cpp src/WeightConverter.cpp -o bin\main.exe
   ```

5. Run the program:
   ```
   bin\main.exe
   ```

## ⚙️ About VS Code Settings

If you use VS Code, there are some settings in the `.vscode` folder to help with compiling and debugging the project, such as:

- A task to build the project automatically with g++
- A debug configuration using GDB

These settings are optional and not required to run the project — you can compile and run manually through the terminal, as shown above.
