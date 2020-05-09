#include <iostream>
#include <math.h>
using namespace std;

float waterBill(int gu, int lul){
    double totalcost;
    double costpergallon;
      
      
 
     if(gu <= lul){
        costpergallon = 0.012;
         totalcost = (gu * costpergallon);
    }
 
    else 
    {
        costpergallon = 0.018;
         totalcost = (gu * costpergallon);
    }


   

    
    return totalcost;
}

    
    
    




int main()
{
	cout << waterBill(4000, 3300);
}