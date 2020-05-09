#include <iostream>
#include <math.h>
using namespace std;

double GasBill(int x){
    int i = x;
    double price = 0.0;
    
    if(x < 0){
        cout << "Incorrect input" << endl;
        return 0;
    }
    
    
    while(x > 0){
        if(x > 200){
            price = price + 1.08;
        }
        if(x <= 200 && x > 100){
            price = price + 1.14;
        }
        if(x <= 100){
            price = price + 1.23;
        }
        
        x--;
    }
    
    return price;
        
}


int main()
{
	cout << GasBill(244) << endl;
}