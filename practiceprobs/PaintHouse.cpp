//Practicum 1 practice
#include <iostream>
#include <math.h>
using namespace std;

double PaintHouse(int width, int depth, int doors){
    int perimeter = 2 * (width + depth);
    double cost = 0.0;
    
    if(width < 0 || depth < 0 || doors < 0){
        return -1;
    }
    
    while(perimeter > 0){
        if(perimeter > 200){
            cost = cost + 15;
        }
        if(perimeter <= 200 && perimeter > 100){
            cost = cost + 10;
        }
        if(perimeter <= 100){
            cost = cost + 8;
        }
        
        perimeter--;
    }
    
    cost = cost + ((double) doors * 6.75);
    
    
    return cost;


}


int main()
{
	cout << PaintHouse(15, 25, 8);
}