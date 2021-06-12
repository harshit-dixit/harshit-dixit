// Given a number n, write an efficient function to print all prime factors of n. 
//For example, if the input number is 12, then output should be “2 2 3”. 
//And if the input number is 315, then output should be “3 3 5 7”.

#include <bits/stdc++.h>
using namespace std;

void allPrimeFactor(int n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2) cout<<n;
}

int main()
{
    allPrimeFactor(315);

    return 0;
}
