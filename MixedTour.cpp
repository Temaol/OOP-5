#include "MixedTour.h"

MixedTour::MixedTour()
{
    this->busNumb = 0;
    this->driverPart = 0;
    this->driveTime = 0;
    walkTime = 0;
}

MixedTour::MixedTour(string excName, int d, int m, int y, int time, double cost, string guidname, int guidpay, int numb, string drname, int drpay, int walktime, int drivetime)
     : WalkingTour(excName, d, m, y, time, cost, guidname, guidpay)
{
    this->busNumb = numb;
    driverName = drname;
    driverPart = drpay;
    walkTime = walktime;
    driveTime = drivetime;
}

int MixedTour::getBusNumb()
{
    return busNumb;
}

string MixedTour::getDriverName()
{
    return driverName;
}

int MixedTour::getDriverPart()
{
    return driverPart;
}

int MixedTour::getWalkTime()
{
    return walkTime;
}

int MixedTour::getDriveTime()
{
    return driveTime;
}

void MixedTour::setBusNumb(int value)
{
    if (value > 999 && value< 10000)
    {
        busNumb = value;
    }
    else
    {
        throw ("incorrect bus number");
    }
}

void MixedTour::setDriverName(string value)
{
    driverName = value;
}

void MixedTour::setDriverPart(int value)
{
    if (value < 100)
    {
        driverPart = value;
    }
    else
    {
        throw ("incorrect driver part value");
    }
}

void MixedTour::setWalkTime(int value)
{
    walkTime = value;
}

void MixedTour::setDriveTime(int value)
{
    driveTime = value;
}

double MixedTour::getPayment()
{
    return getCost()*driverPart/100;
}
