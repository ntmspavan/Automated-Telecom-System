#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
using namespace std;
void calldetails::view_calldet_cl(int u)
{
system("clear");
calldetails cl;
cout<<"\n\n\n\n\n\n\t\t\t\t\033[1;32m-----------------------------CALL DETAILS OF THE CUSTOMER------------------------\033[0m\n\n";
cl.view_ccalldetails(u);
}
void calldetails::calldet_cl()
{
system("clear");
calldetails cl;
char cr1[2];
do
{
try
{
cout<<"\n\n\n\n\n\n\t\t\t\t\033[1;32m-----------------------------CALL DETAILS OF THE CUSTOMER------------------------\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t\tPress '1' for Add Call Details";
cout<<"\n\n\t\t\t\t\t\t\tPress '2' for View Customer Call Details";
cout<<"\n\n\t\t\t\t\t\t\tPress '3' for Exit\n\n\n\t\t\t\t\t\tEnter your Choice : ";
cin>>cr1;
if((cr1[0]>64&&cr1[0]<91)||(cr1[0]>96&&cr1[0]<123))
throw "\n\n\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(cr1[0]>'3'&&cr1[0]=='\0')
throw "\n\n\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(cr1[0]>'0'&&cr1[0]<'4'&&cr1[1]<'0')
{

switch(cr1[0])
{
case '1':
cl.add_ccalldetails();
break;
case '2':
cl.view_ccall_details();
break;
 case '3':
break;
}
}
else
throw "\n\n\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers....";
                                }
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m"<<msg;
}

}while(cr1[0]!='3');

}
