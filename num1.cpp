#include<iostream>
#include<string.h>
#include<ctype.h>
#include<sstream>
using namespace std;
int main()
{
string n;
int b;
do
{
int i=0;
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cin>>n;
while(n[i]!='\0')
{
if(!isdigit(n[i]))
{
if(n[i]==',')
{
 cout<<"comma is valid";
}
a=0;
cout<<"\n\n\t\t\t\t\t\t\t\tEnter the Valid Customer Id ........ ";
break;
}
else
a=1;
i++;
}

}while(a!=1);
stringstream dd(n);
dd >> b;
return b;
}

