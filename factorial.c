#include<iostream>
#include<cstdio>
using namespace std;
 
int fact(int n){
     if(n > 1)
   {
  return n*fact(n-1);
   } 
     else
    
  {
    return 1;
   }
  
 }
     


int main()
{    int n;

     cout << "Enter a number\n";
     cin >> n;
     
     cout <<"The factorial of "<< n<< endl << fact(n) << endl;
    
     return 0;
}
