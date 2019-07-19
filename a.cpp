#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> lst;
list<int> lst1;
int i,j;
for(i=0;i<10;i++)
{
 lst.push_back(i);
}
cout<<"content"<<endl;
list<int>::iterator p=lst.begin();
while(p!=lst.end())
{
cout<<*p<<endl;
p++;
}
for(j=0;j<10;j++)
{
 lst1.push_back(j);
}
cout<<"content"<<endl;
list<int>::iterator q=lst.begin();
while(q!=lst.end())
{
cout<<*q<<endl;
q++;
}

lst.merge(lst1);

while(p!=lst.end())
{
cout<<*p<<endl;
p++;
}

}

