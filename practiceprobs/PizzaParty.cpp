//Practicum 1 practice
#include <iostream>
#include <math.h>
using namespace std;

double PizzaParty(int number, double cost, double discount){
    double total = 0;
    if(number < 10){
        total = ((double)number * cost) + 10;
        
        
    }
    if(number >= 10){
        total = (double)number * (cost - discount * cost)
    }
    
    return total;
}





int main()
{
	std::cout << "Hello from AWS Cloud9!" << std::endl;
}