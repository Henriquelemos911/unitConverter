#ifndef DISTANCECONVERTER_H
#define DISTANCECONVERTER_H

class DistanceConverter {
public:
    static int distanceMenu();
// Centimeter
    static double centimeterToMile(double Value);
    static double centimeterToInch(double Value);
// Mile
    static double mileToCentimeter(double Value);
    static double mileToInch(double Value);
// Inch
    static double inchToCentimeter(double Value);
    static double inchToMile(double Value);
};

#endif
