#include<iostream>
using namespace std;

int main()
{
    int T,i,j;
    while(cin>>T)
    {
        int arr[T],c=0;
        for(i=0;i<T;i++)
            cin>>arr[i];
        for(i=0;i<T-1;i++)
        {
            for(j=0;j<T-1-i;j++)
            {
               if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
                   ++c;
               }
            }
        }

        cout<<"Minimum exchange operations : "<<c<<endl;

    }

    return 0;
}
