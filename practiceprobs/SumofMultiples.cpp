#include <iostream>
#include <math.h>
using namespace std;


int sumOfMultiples(int seed, int cap){
    int sum = 0;
    int x = 1;
    while (x <= cap)
    {
        if(x % seed == 0)
        {
            sum = sum + x;
        }
        x++;
        
    }
    return sum;
    
}





int main()
{
	cout << sumOfMultiples(6, 20);
}