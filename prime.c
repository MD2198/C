#include <iostream>
#include <cstdio>
using namespace std;

int prime(int n)
{
    int i=1,c=0;
    for(i=i; i<=n; i++)
  {
     if(n % i == 0)
     c++;
   }
   return c;
}
int main() {
   int n;
   cin >> n;
    if(prime(n) == 2)
    cout << "prime" << endl;
    else
    cout << "not prime" << endl;
    return 0;
 }
