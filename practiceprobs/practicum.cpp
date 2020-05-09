//practicum 1 question
#include <iostream>
#include <math.h>
using namespace std;

double smallestNumber(double x, double y, double z){
    double smallestnum;
      cout.precision(2);
   
    
    if(x <= y && x <= z){
       // x = smallestnum;
        smallestnum = x;
        //cout << x;
    }
    else if(y <= x && y <= z){
       // y = smallestnum;
          smallestnum = y;
       // cout << y;
    }
    else if(z <= x && z <= y){
       // z = smallestnum;
     smallestnum = z;
        //cout << z;
    }
    else{
        return 0;
    }

    return smallestnum;
   

}


int main()
{
	cout << smallestNumber(2.5,10,17);
}