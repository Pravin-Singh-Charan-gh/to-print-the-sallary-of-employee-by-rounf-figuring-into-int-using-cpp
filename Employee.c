#include <iostream>
using namespace std;

 
int
main ()
{
  
    //Write your code here
  
int bs;
  
char grade;
  
float hra, da, allow, pr, tots;
  
cin >> bs;
  
cin >> grade;
  
hra = bs * 20.0 / 100;
  
da = bs * 50.0 / 100;
  
pr = bs * 11.0 / 100;
  
if (grade == 'A')
    
allow = 1700;
  
  else if (grade == 'B')
    
allow = 1500;
  
  else
    
allow = 1300;
  
tots = bs + hra + da + allow - pr;
  
int tot = tots;        // roung figuring
  
if (tots - tot > 0.50)
    tot = tot + 1;
  
cout << tot;
  
return 0;

}
