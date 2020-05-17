#include<iostream>
using namespace std;

int main()
{
    int a[3], i, j, temp;
    while(1)
    {
    for(i=0;i<3;i++)
    cin>>a[i];
    if(a[0]==0 && a[1]==0 && a[2]==0) break;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if((a[0]*a[0]+a[1]*a[1])==a[2]*a[2])
    {
        cout<<"right"<<endl;
    }
    else cout<<"wrong"<<endl;

    }


   return 0;
}
