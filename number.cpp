#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
int a;
int b;
do{

cout<<"\nEnter number  : ";
cin>>a;


if(!isdigit(a))
{
b=1;
cout<<" a number";
}

else
{
b=0;
cout<<"not a Number";
}
}while(b!=1);
return 0;

}

