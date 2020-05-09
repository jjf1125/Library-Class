//Practicum 1 DNA question
#include <iostream>
#include <math.h>
using namespace std;

void aminoAcid(char x){
    
    switch(x){
        case 'A': cout << "Adenine" << endl;
        break;
        case 'C': cout << "Cytosine" << endl;
        break;
        case 'T': cout << "Thymine" << endl;
        break;
        case 'G': cout << "Guanine" << endl;
        break;
        default: cout << "Invalid" << endl;
    }
    
    
}


int main()
{
	aminoAcid('A');
	aminoAcid('C');
	aminoAcid('T');
	aminoAcid('G');
}