#include <iostream>
using namespace std;
int main(){
    int n,l,i,k;
    cin>>n;
    for(i=n;i>=0;i--)
    {
     for(k=0;k<=2*i;k++)
     {
     cout<<" ";				
     }
     for(l=0;l<5-i;l++)
     {
      cout<<" *";
     }
        cout<<"\n";
    }
}
