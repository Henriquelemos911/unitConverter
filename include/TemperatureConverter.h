#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

class TemperatureConverter {
public:
    static int temperatureMenu();
// Celsius
    static double celsiusToFahrenheit(double Value);
    static double celsiusToKelvin(double Value);
// Fahrenheit
    static double fahrenheitToCelsius(double Value);
    static double fahrenheitToKelvin(double Value);
// Kelvin
    static double kelvinToCelsius(double Value);
    static double kelvinToFahrenheit(double Value);
};

#endif