#include<iostream>
using namespace std;

int main()
{
    int T;
    while(cin>>T)
    {
        int money,i,j,sub,dif,a,b;
        int books[T];
        for(i=0;i<T;i++)
           cin>>books[i];
        cin>>money;
        dif=money;
        for(i=0;i<T;i++)
        {
            if(books[i]>=money) continue;
           for(j=0;j<T;j++)
           {
              if(i==j || books[j]>=money) continue;
              if((books[i]+books[j])==money)
              {
                  sub=books[i]-books[j];
                  if(sub<0) sub*=-1;
                  if(sub<dif)
                  {
                      dif=(books[i]-books[j]);
                      if(dif<0) dif*=-1;
                      a=books[i];
                      b=books[j];
                  }
              }
           }
        }

        if(a<b) cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;
        else
            cout<<"Peter should buy books whose prices are "<<b<<" and "<<a<<"."<<endl<<endl;

    }

    return 0;

}
