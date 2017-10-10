#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
string n;
int a;
do
{
int i=0;
cout<<"\nEnter name  : ";
cin>>n;
while(n[i]!='\0')
{
if(!isalpha(n[i]))
{
if(n[i]==',')
{
 cout<<"comma is valid";
}
a=0;
cout<<"\nEnter valid name";
break;
}
else
a=1;
i++;
}

}while(a!=1);
return 1;

}

