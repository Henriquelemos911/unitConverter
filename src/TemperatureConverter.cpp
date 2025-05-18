#include <iostream>
#include "utils.h"
#include "TemperatureConverter.h"

using namespace std;

// Temperature menu
int TemperatureConverter::temperatureMenu(){
    char function;
    double value;
    do {
        cout << "         Convert Temperature" << endl;
        cout << "Choose one type of unit to convert:" << endl;
        cout << "1. Celsius (°C) -> Fahrenheit (°F)" << endl;
        cout << "2. Celsius (°C) -> Kelvin (K)" << endl;
        cout << "3. Fahrenheit (°F) -> Celsius (°C)" << endl;
        cout << "4. Fahrenheit (°F) -> Kelvin (K)" << endl;
        cout << "5. Kelvin (K) -> Celsius (°C)" << endl;
        cout << "6. Kelvin (K) -> Fahrenheit (°F)" << endl;
        cout << "7. exit" << endl;
        cout << "Please choose one option: ";
        cin >> function;

        if (function == '7'){
            clearScreen();
            return 0;
        }
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (function) {
            case '1':
                cout << value << " °C = " << celsiusToFahrenheit(value) << " °F" << endl;
                break;
            case '2':
                cout << value << " °C = " << celsiusToKelvin(value) << " K" << endl;
                break;
            case '3':
                cout << value << " °F = " << fahrenheitToCelsius(value) << " °C" << endl;
                break;
            case '4':
                cout << value << " °F = " << fahrenheitToKelvin(value) << " K" << endl;
                break;
            case '5':
                cout << value << " K = " << kelvinToCelsius(value) << " °C" << endl;
                break;
            case '6':
                cout << value << " K = " << kelvinToFahrenheit(value) << " °F" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
        cout << endl;
    } while(true);
}

// Celsius
double TemperatureConverter::celsiusToFahrenheit(double Value){    // Celsius to Fahrenheit
    return (Value * 1.8) + 32;
}
double TemperatureConverter::celsiusToKelvin(double Value){        // Celsius to Kelvin
    return Value + 273.15;
}
    
// Fahrenheit
double TemperatureConverter::fahrenheitToCelsius(double Value) {   // Fahrenheit to Celsius
        return (Value - 32) * 5.0 / 9.0;
}

double TemperatureConverter::fahrenheitToKelvin(double Value) {    // Fahrenheit to Kelvin
    return (Value - 32) * 5.0 / 9.0 + 273.15;
}
    
// Kelvin
double TemperatureConverter::kelvinToCelsius(double Value){        // Kelvin to Celsius
    return Value - 273.15;
}

double TemperatureConverter::kelvinToFahrenheit(double Value){     // Kelvin to Fahrenheit
    return (Value - 273.15) * 1.8 + 32;
}