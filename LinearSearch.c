#include<iostream>
#include<cstdio>
using namespace std;

int linear(int k, int n, int a[]){
   
   for(int i=0; i <= n; i++)
   {
     if(k == a[i])          //checking wheather the key is one of the i/p variable
      return 1;
    }

     return 0;
  } 


int main()
{   int key,n,a[1000];
     cout << "Enter the number of variables\n";  //taking input from user
     cin >> n;

    cout << "Enter the numbers\n";         
     for(int i=0; i < n; i++)
     {
      cin >> a[i] ;
      }

       cout << "Enter the key to be found\n";
       cin >> key ;
     
       if(linear(key,n,a) == 1)
       {
         cout << "Found" << endl;
        }
        else 
         cout << "Not found" << endl;

 return 0;

 }
