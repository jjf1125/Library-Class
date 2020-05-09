#include <iostream>
#include <math.h>
using namespace std;


float CoffeeCost(int num, double price){
    double cost = (double)num * price;
    
    int i = 0;
    while( i <= num){
        if(i % 13 == 0 and i != 0){
            cost = cost - price;
        }
        
        i++;
    }
    return cost;
        }
    
    
int main()
{
	cout << CoffeeCost(13, 3);
}