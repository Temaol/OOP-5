#pragma once
#include <iostream>
#include <string>

using namespace std;

class Excursion
{
private:
    string excursionName;
    int day;
    int month;
    int year;
    int time;
    double cost;
public:
    Excursion();
    Excursion(string nameExc, int d, int m, int y, int time, double cost);

    string getExcursionName();
    string getDate();
    int getTime();
    double getCost();

    void setExcursionName(string name);
    void setDate(int d, int m, int y);
    void setTime(int t);
    void setCost(double cost);

    ~Excursion();
};
