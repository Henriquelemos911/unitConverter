#include <iostream>
#include "utils.h"
#include "WeightConverter.h"
using namespace std;

// Weight menu
int WeightConverter::weightMenu(){
    int function;
    double value;
    do {
        cout << "         Convert Weight" << endl;
        cout << "Choose one type of unit to convert:" << endl;
        cout << "1. Gram (G) -> Kilogram (KG)" << endl;
        cout << "2. Gram (G) -> Pound (LB)" << endl;
        cout << "3. Gram (G) -> Ounce (OZ)" << endl;
        cout << "4. Kilogram (KG) -> Gram (G)" << endl;
        cout << "5. Kilogram (KG) -> Pound (LB)" << endl;
        cout << "6. Kilogram (KG) -> Ounce (OZ)" << endl;
        cout << "7. Ounce (OZ) -> Gram (G)" << endl;
        cout << "8. Ounce (OZ) -> Pound (LB)" << endl;
        cout << "9. Ounce (OZ) -> Kilogram (KG)" << endl;
        cout << "10. Pound (LB) -> Gram (G)" << endl;
        cout << "11. Pound (LB) -> Ounce (OZ)" << endl;
        cout << "12. Pound (LB) -> Kilogram (KG)" << endl;
        cout << "13. exit" << endl;
        cout << "Please choose one option: ";
        cin >> function;

        if (function == 13){
            clearScreen();
            return 0;
        }
        
        cout << "Enter the value to convert: ";
        cin >> value;

        if (value <= 0){
            clearScreen();
            cout << "ERROR: Invalid value\n\n" << endl;
            return 0;
        }

        switch (function) {
            case 1:
                cout << value << " G = " << gramToKilogram(value) << " KG" << endl;
                break;
            case 2:
                cout << value << " G = " << gramToPound(value) << " LB" << endl;
                break;
            case 3:
                cout << value << " G = " << gramToOunce(value) << " OZ" << endl;
                break;
            case 4:
                cout << value << " KG = " << kilogramToGram(value) << " G" << endl;
                break;
            case 5:
                cout << value << " KG = " << kilogramToPound(value) << " LB" << endl;
                break;
            case 6:
                cout << value << " KG = " << kilogramToOunce(value) << " OZ" << endl;
                break;
            case 7:
                cout << value << " OZ = " << ounceToGram(value) << " G" << endl;
                break;
            case 8:
                cout << value << " OZ = " << ounceToPound(value) << " LB" << endl;
                break;
            case 9:
                cout << value << " OZ = " << ounceToKilogram(value) << " KG" << endl;
                break;
            case 10:
                cout << value << " LB = " << poundToGram(value) << " G" << endl;
                break;
            case 11:
                cout << value << " LB = " << poundToOunce(value) << " OZ" << endl;
                break;
            case 12:
                cout << value << " LB = " << poundToKilogram(value) << " KG" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
        cout << endl;
    } while(true);
}

// gram (G)
double WeightConverter::gramToKilogram(double Value){
    return Value / 1000.0;
}
double WeightConverter::gramToPound(double Value){
    return Value / 453.59237;
}
double WeightConverter::gramToOunce(double Value){
    return Value / 28.3495;
}

// kilogram (KG)
double WeightConverter::kilogramToGram(double Value){
    return Value * 1000.0;
}
double WeightConverter::kilogramToPound(double Value){
    return Value * 2.20462;
}
double WeightConverter::kilogramToOunce(double Value){
    return Value / 35.274;
}

// ounce (OZ)
double WeightConverter::ounceToGram(double Value){
    return Value * 28.3495;
}
double WeightConverter::ounceToPound(double Value){
    return Value / 16.0;
}
double WeightConverter::ounceToKilogram(double Value){
    return Value / 35.274;
}

// pound (LB)
double WeightConverter::poundToGram(double Value){
    return Value * 453.59237;
}
double WeightConverter::poundToOunce(double Value){
    return Value * 16.0;
}
double WeightConverter::poundToKilogram(double Value){
    return Value / 2.20462;
}