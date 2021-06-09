#include<bits/stdc++.h>
using namespace std;
void least_prime(int n)
{
    vector<int> lp(n+1,0);
    lp[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(lp[i]==0)
        {
            lp[i]=i;
            for(int j=i*i;j<=n;j+=i)
            {
                if(lp[j]==0)
                    lp[j]=i;
            }
        }
    }
    //print least prime factor of natural number number
    for(int i=1;i<=n;i++)
    {
        cout<<"Least prime factor of "<<i<<" : "<<lp[i]<<"\n";
    }
}

int main()
{
    int n=10;
    least_prime(n);
    return 0;
}
