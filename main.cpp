#include <iostream>
#include "MixedTour.h"

#define MAXN 3

using namespace std;

void sort(WalkingTour** tour);

int main()
{
    WalkingTour* tour[MAXN];
    tour[0] = new WalkingTour("First",1,4,2005,5,500,"Mykola",70);
    tour[1] = new MixedTour("second", 24, 9, 2009, 17, 900, "Pavlo", 20, 5545, "Petro", 30, 200, 700);
    tour[2] = new WalkingTour("therd",13,3,2015,80,400,"Mykola",80);
    sort(tour);
    for (int i = 0, ibuf = -1; i < MAXN; i++)
    {
        if (ibuf == i) continue;
        double sum = tour[i]->getGuidPaiment();
        string buf = tour[i]->getGuidName();
        for (int k = i + 1;k != i && k < MAXN;k++)
        {
            if (buf == tour[k]->getGuidName())
            {
                sum += tour[k]->getGuidPaiment();
                delete tour[k];
                ibuf = k;
            }
        }
        cout << tour[i]->getGuidName() << " " << sum << endl;
    }
}

void sort(WalkingTour** tour)
{
    for (int i = 0; i < MAXN - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < MAXN; ++j)
        {
            if (tour[j]->getPayment() < tour[min]->getPayment())
                min = j;
        }
        swap(tour[i], tour[min]);
    }
}
