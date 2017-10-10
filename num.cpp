#include<iostream>
#include<string.h>
#include<sstream>
#include<ctype.h>
using namespace std;
int  num(int);
int main()
{
int a,c;
cout<<"Enter number";
cin>>a;
c=num(a);
cout<<"the entered"<<c;
return 0;
}
int num(int a)
{
cout<<"inside func";
string n;
int b;

stringstream nn;
nn<<a;
n=nn.str();
cout<<n<<endl;
do
{
int i=0;
while(n[i]!='\0')
{
if(!isdigit(n[i]))
{
if(n[i]==',')
{
 cout<<"comma is valid";
}
a=0;
cout<<"\nEnter valid number";
main();
}
else
a=1;
i++;
}

}while(a!=1);
stringstream mm(n);
mm>> b;
return b;

}

