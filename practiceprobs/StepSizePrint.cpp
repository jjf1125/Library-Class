#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void stepSizePrint(int min, int max, int step){
    int num;
    int count;
    if(max > min && step < 0 || max < min && step > 0)
    {
        cout << "Wrong Settings!" << endl;
    }
    else if(step == 0){
        cout << "Step size cannot be zero." << endl;
    }
    else if(max > min){
        num = min;
        while(num < max){
            if(num == max){
                cout << endl;
            }
            else
            {
                if(num > max)
                {
                    cout << endl;
                }
                else
                {
                    cout << num << endl;
                }
                num = num + step;
            }
        }
    }
        else if(min > max){
            num = min;
            while(num > max){
                if(num == max){
                    cout << endl;
                }
                else
                {
                    if(num > min)
                    {
                        cout << endl;
                    }
                    else
                    {
                        cout << num << endl;
                    }
                    num = num + step;
                }
            }
        }
   }
    
    




int main()
{
	std::cout << "Hello from AWS Cloud9!" << std::endl;
}