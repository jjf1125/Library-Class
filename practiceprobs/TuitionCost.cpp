#include <iostream>
#include <math.h>
using namespace std;

int TuitionCost(int units, float cost)
{
    float bill;
    if(units > 16 && cost > 0)
    {
        bill = 16 * cost + ((units - 16) * (cost / 2));
    }
    else if ( units <= 16 && units > 0 && cost > 0)
    {
        bill = units * cost;
    }
    else
    {
        return -1;
    }
    return bill;
    }





int main()
{
	cout << TuitionCost(16, 200) << endl;
	cout << TuitionCost(17, 300) << endl;
}