#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int prodDigits(int dig)
{
    int product = 1;
    if(dig == 0){
        return 0;
    }
    else
    {
        while(dig > 0){
            product = product * (dig % 10);
            dig = dig / 10;
        }
    }
    return product;
}




int main()
{
	cout << prodDigits(1456) << endl;
}