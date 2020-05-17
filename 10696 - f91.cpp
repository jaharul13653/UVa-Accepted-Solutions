#include<iostream>
using namespace std;

long int sakline(long int N)
{
    if(N<=100) return (sakline(sakline(N+11)));

    if(N>=101) return (N-10);



}

int main()
{
   long int N;
    while(1)
    {
        cin>>N;
        if(N==0) break;
        cout<<"f91("<<N<<") = ";
        N=sakline(N);
        cout<<N<<endl;
    }

    return 0;
}
