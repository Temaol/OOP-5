#pragma once
#include "Excursion.h"

class WalkingTour : public Excursion
{
private:
    string guidName;
    int guidPart;
public:
    WalkingTour();
    WalkingTour(string excName, int d, int m, int y, int time, double cost, string guidname, int part);

    string getGuidName();
    int getGuidPart();

    void setGuidName(string name);
    void setGuidPart(int n);

    double getGuidPaiment();

    virtual double getPayment();

    ~WalkingTour();
};

