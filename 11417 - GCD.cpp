#include<iostream>
using namespace std;

int gcd(int i, int j)
{
    int rem;
    while(i!=0)
    {
        rem=j%i;
        j=i;
        i=rem;
    }
    return j;
}

int main()
{
    int N,G,i,j;
    while(1)
    {
        G=0;
        cin>>N;
        if(N==0) break;
       for(i=1;i<N;i++)
       {
          for(j=i+1;j<=N;j++)
          {
             G+=gcd(i,j);
          }
       }

       cout<<G<<endl;

    }

    return 0;

}
