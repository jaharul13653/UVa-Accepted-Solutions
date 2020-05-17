#include<iostream>
using namespace std;

int main()
{
    int n,b,s,sum;
    while(cin>>n>>b)
    {
        sum=n;
        while(n>=b)
        {
            s=n/b;
            sum+=s;
            n=s+(n%b);
        }
        cout<<sum<<endl;

    }

    return 0;
}
