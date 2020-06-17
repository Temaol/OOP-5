#include "WalkingTour.h"

WalkingTour::WalkingTour()
{
    guidName = "";
    guidPart = 0;
}

WalkingTour::WalkingTour(string excName, int d, int m, int y, int time, double cost, string guidname, int pay) : Excursion(excName,d,m,y,time,cost)
{
    guidName = guidname;
    guidPart = pay;
}

string WalkingTour::getGuidName()
{
    return guidName;
}

int WalkingTour::getGuidPart()
{
    return guidPart;
}

void WalkingTour::setGuidName(string name)
{
    guidName = name;
}

void WalkingTour::setGuidPart(int n)
{
    if (n > 100)
    {
        throw ("Guid part is too big");
    }
    guidPart = n;
}

double WalkingTour::getGuidPaiment()
{
    return getCost() * guidPart / 100;
}

double WalkingTour::getPayment()
{
    return getCost()*guidPart/100;
}

WalkingTour::~WalkingTour()
{
}
