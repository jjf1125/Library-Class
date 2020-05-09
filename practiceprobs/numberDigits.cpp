#include <iostream>
#include <math.h>


void numberDigits(int num){
    bool negative = false;
    if(num < 0){
        num = num * -1;
        negative = true;
    }
    
    string o = to_string(num);
    
    if(negative == true){
        num = num * -1;
    }
    
    cout << "The number" << num << "has" << o.length() << "digits." << endl;
}




int main()
{
	std::cout << "Hello from AWS Cloud9!" << std::endl;
}