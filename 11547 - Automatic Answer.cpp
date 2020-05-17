#include<iostream>
using namespace std;

int main()
{
    int T,n;
    long long int sum;
    cin>>T;
    while(T--)
    {
        cin>>n;
        sum=((((((n*567)/9)+7492)*235)/47)-498);
        sum=sum/10;
        sum=sum%10;
        if(sum<0) sum*=-1;
        cout<<sum<<endl;
    }

    return 0;
}
