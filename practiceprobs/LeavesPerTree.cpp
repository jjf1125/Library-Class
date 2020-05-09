#include <iostream>
#include <math.h>
using namespace std;

void LeavesPerTree(double weight){
    double leaves = weight / 0.001;
    
    double pertree = leaves / 1031;
    
    if(pertree <= 10000){
        cout << pertree << endl;
    }
    if(pertree > 10000){
        cout << pertree << endl;
        cout << "More leaves than last year";
    }
}




int main()
{
	LeavesPerTree(4000);
}