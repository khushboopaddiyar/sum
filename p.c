#include <iostream>
//this is a code for printing pattern
//star printing program
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=n;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
