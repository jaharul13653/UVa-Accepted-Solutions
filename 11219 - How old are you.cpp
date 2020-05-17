#include<iostream>
#include<string>
using namespace std;

int main()
{
    int D,M,Y,D2,M2,Y2,test=0,T,DD,DD2;
    char ch;
    cin>>T;

    while(T--)
    {
        test++;
        cin>>D>>ch>>M>>ch>>Y;
        cin>>D2>>ch>>M2>>ch>>Y2;
        DD=D+(M*30)+(Y*365);
        DD2=D2+(M2*30)+(Y2*365);
        DD=(DD-DD2);
        DD2=DD/365;
        if(DD<0) cout<<"Case #"<<test<<": Invalid birth date"<<endl;
        else if(DD>=0 && DD2==0) cout<<"Case #"<<test<<": 0"<<endl;
        else  if(DD2>130) cout<<"Case #"<<test<<": Check birth date"<<endl;
        else if(DD2>0 && DD2<131) cout<<"Case #"<<test<<": "<<DD2<<endl;
    }

    return 0;

}
