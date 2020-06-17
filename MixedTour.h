#pragma once
#include "WalkingTour.h"
class MixedTour :
    public WalkingTour
{
private:
    int busNumb;
    string driverName;
    int driverPart;
    int walkTime;
    int driveTime;
public:
    MixedTour();
    MixedTour(string excName, int d, int m, int y, int time, double cost, string guidname, int guidpay, int numb, string drname, int drpay, int walktime, int drivetime);

    int getBusNumb();
    string getDriverName();
    int getDriverPart();
    int getWalkTime();
    int getDriveTime();

    void setBusNumb(int value);
    void setDriverName(string value);
    void setDriverPart(int value);
    void setWalkTime(int value);
    void setDriveTime(int value);

    double getPayment() override;
};

