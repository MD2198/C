#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,rem,rev=0,k;
     cout << "Enter  a number \n";
     cin >> n ;
  
    k = n;
    do{
     rem = (k % 10);
      k = (k / 10);
      rev = rev*10 + rem ;
      }while(k >= 1);
     
     if(n == rev)
     {
        cout << "YES" << endl;
      }
      else
      {
       cout << "NO" << endl;
       }
   return 0;
  }
