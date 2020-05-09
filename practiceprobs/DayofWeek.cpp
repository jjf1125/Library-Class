#include <iostream>
#include <math.h>
using namespace std;

void DayOfWeek(int d){
    
    if(d == 1){
        cout << "MONDAY";
    }
    else if(d == 2 || d ==  3 || d == 4){
        cout << "WORKDAY";
    }
    else if(d == 5){
        cout << "FUNDAY";
    }
    else if(d == 6 || d == 0){
        cout << "SLEEPDAY";
    }
    else{
        cout << "INVALID";
    }
}

int main()
{
	DayOfWeek(1);
}