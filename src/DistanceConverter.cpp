#include <iostream>
#include "utils.h"
#include "DistanceConverter.h"
using namespace std;

// Distance menu
int DistanceConverter::distanceMenu(){
    char function;
    double value;
    do {
        cout << "         Convert Distance" << endl;
        cout << "Choose one type of unit to convert:" << endl;
        cout << "1. Centimeter (CM) -> Mile (MI)" << endl;
        cout << "2. Centimeter (CM) -> Inch (IN)" << endl;
        cout << "3. Mile (MI) -> Centimeter (CM)" << endl;
        cout << "4. Mile (MI) -> Inch (IN)" << endl;
        cout << "5. Inch (IN) -> Centimeter (CM)" << endl;
        cout << "6. Inch (IN) -> Mile (MI)" << endl;
        cout << "7. exit" << endl;
        cout << "Please choose one option: ";
        cin >> function;

        if (function == '7'){
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
            case '1':
                cout << value << " CM = " << centimeterToMile(value) << " MI" << endl;
                break;
            case '2':
                cout << value << " CM = " << centimeterToInch(value) << " IN" << endl;
                break;
            case '3':
                cout << value << " MI = " << mileToCentimeter(value) << " CM" << endl;
                break;
            case '4':
                cout << value << " MI = " << mileToInch(value) << " IN" << endl;
                break;
            case '5':
                cout << value << " IN = " << inchToCentimeter(value) << " CM" << endl;
                break;
            case '6':
                cout << value << " IN = " << inchToMile(value) << " MI" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
        cout << endl;
    } while(true);
}

// centimeter
double DistanceConverter::centimeterToMile(double Value){    // centimeter(CM) to mile(MI)
    return Value / 160934.4;
}
double DistanceConverter::centimeterToInch(double Value){    // centimeter(CM) to inch(IN)
    return Value / 2.54;
}

// mile
double DistanceConverter::mileToCentimeter(double Value){    // mile(MI) to centimeter(CM) 
    return Value * 160934.4;
}
double DistanceConverter::mileToInch(double Value){          // mile(MI) to inch(IN)
    return Value * 63360;
}

// inch
double DistanceConverter::inchToCentimeter(double Value){    // inch(IN) to centimeter(CM)
    return Value * 2.54;
}
double DistanceConverter::inchToMile(double Value){          // inch(IN) to mile(MI)
    return Value / 63360;
}
