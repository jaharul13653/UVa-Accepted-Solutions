#include<iostream>
using namespace std;

int main()
{
    char a[10];
    int T=1;
    while(1)
    {
    cin>>a;
    if(a[0]=='*') break;
    else if (a[0]=='H') cout<<"Case "<<T<<": Hajj-e-Akbar"<<endl;
    else if(a[0]=='U') cout<<"Case "<<T<<": Hajj-e-Asghar"<<endl;
    ++T;
    }

   return 0;
}
