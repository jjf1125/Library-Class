#include <iostream>
#include <math.h>
using namespace std;

void calculator(double first, double sec, char one){
    switch(one){
        case '+': {
            cout << first << " " << one << " " << sec << " " << "=" << " " << first+sec << endl;
            ; break;
        case '-': cout << first << " " << one << " " << sec << " " << "=" << " " << first-sec << endl;
            break;
        case '*': cout << first << " " << one << " " << sec << " " << "=" << " " << first*sec << endl;
            break;
        case '/': 
        cout.precision(2);
        cout << first << " " << one << " " << sec << " " << "=" << " " << first/sec << endl;
            break;
        default: cout << "Invalid Operator!"; break;
    }
}
}

int main()
{
    calculator(3, -7, '/');
}