#ifndef WEIGHTCONVERTER_H
#define WEIGHTCONVERTER_H

class WeightConverter {
public:
    static int weightMenu();
// gram (G)
    static double gramToKilogram(double Value);
    static double gramToPound(double Value);
    static double gramToOunce(double Value);
// kilogram (KG)
    static double kilogramToGram(double Value);
    static double kilogramToPound(double Value);
    static double kilogramToOunce(double Value);
// ounce (OZ)
    static double ounceToGram(double Value);
    static double ounceToPound(double Value);
    static double ounceToKilogram(double Value);
// pound (LB)
    static double poundToGram(double Value);
    static double poundToOunce(double Value);
    static double poundToKilogram(double Value);
};

#endif