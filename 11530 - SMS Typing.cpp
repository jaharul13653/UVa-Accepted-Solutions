#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t, i,j,key, len;
    string a;
    cin >> t;
    cin.ignore();
    for(j=1;j<=t;j++)
    {
        key=0;
        getline(cin,a);
        len=a.size();
        for(i=0;i<len;i++)
        {
            if(a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w' || a[i]==' ') key+=1;
            else if(a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q' || a[i]=='u' || a[i]=='x') key+=2;
            else if(a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r' || a[i]=='v' || a[i]=='y') key+=3;
            else if(a[i]=='s' || a[i]=='z') key+=4;
        }
        cout<<"Case #"<<j<<": "<<key<<endl;

    }
    return 0;
}
