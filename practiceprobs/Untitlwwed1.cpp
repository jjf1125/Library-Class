#include <iostream>
#include <math.h>
using namespace std;

void printSeriesMinusThrees(int n) {    
    int result = 0;
    int i;
    
         if(i == 1){
//             // adding for the 1st number 
           result += i;
           cout << i;
       }
        else if (i % 3 != 0) {
//             // If the number is not divisible by 3, add it to sum and print
            result += i;
           cout << " + " << i; 
        }
    
      if(i % 3 != 0){
           result -= i;
             cout << " - " << i; 
         
      }
      
      while(i % 3 == 0){
           result -= i;
             cout << " - " << i; 
      }
      
        
         cout << endl << "Result of the series is " << result << endl;
        
    }
         
    




    
    
//     for (int i = 1; i <= n; i++) {
//         if (i == 1){
//             // adding for the 1st number 
//             result += i;
//             cout << i;
//         }
//         else if (i%3 != 0) {
//             // If the number is not divisible by 3, add it to sum and print
//             result += i;
//             cout << " + " << i; 
//         }
//         else {
//             // number is divisible by 3, it gets subtracted from the result. 
//             result -= i;
//             cout << " - " << i; 
//         }
//     }
//     cout << endl << "Result of the series is " << result << endl;
// }
int main()
{
	printSeriesMinusThrees(7);
}