#include <iostream>
#include "include/utils.h"
#include "include/TemperatureConverter.h"
#include "include/DistanceConverter.h"
#include "include/WeightConverter.h"

using namespace std;

char mainMenu();

int main(){

    mainMenu();
    
    return 0;
}

char mainMenu(){
char function;
    do {
        cout << "         Unit Conversor" << endl;
        cout << "Choose one type of unit to convert:" << endl;
        cout << "1. temperature" << endl;
        cout << "2. distance" << endl;
        cout << "3. weight" << endl;
        cout << "4. exit" << endl;
        cout << "Please choose one option: ";
        cin >> function;

        switch (function)
        {
        case '1':
            clearScreen();
            TemperatureConverter::temperatureMenu();
            break;
        case '2':
            clearScreen();
            DistanceConverter::distanceMenu();
            break;
        case '3':
            clearScreen();
            WeightConverter::weightMenu();
            break;
        case '4': // end the program
            clearScreen();
            cout << "Program finished!" << endl;
            return 0;
        default: // case error
            clearScreen();
            cout << "ERROR: Invalid option! Try again \n\n" << endl;
        }
    }while(true);
}