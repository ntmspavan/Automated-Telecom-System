#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
using namespace std;
void calldetails::view_ccalldetails(int u)
{
calldetails cl;
cl.view_calldetails(u);
 delay_time(2000);
cout << "\n\n\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;

}
void calldetails::view_ccall_details()
{
system("clear");
try{
calldetails cl;
int u,s1;
cout<<"\n\n\n\n\t\t\t\t\t\t\033[1;32m======CUSTOMER CALL DETAILS======\033[0m";
cout<<"\n\n\n\n\t\t\t\t\tEnter Customer Id : ";
u=cus_id_int();
//cin>>u;
s1=cus_id_val(u);
if(s1==0)
throw "\n\n\t\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
cl.view_calldetails(u);
 delay_time(2000);
cout << "\n\n\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");

}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
void calldetails::add_ccalldetails()
{
system("clear");
try
{
calldetails cl;
int u,s1;
cout<<"\n\n\n\n\t\t\t\t\t\033[1;32m========ADDING CALL DETAILS=========\033[0m";
cout<<"\n\n\n\n\t\t\t\t\tEnter the Customer Id to Add Call Details : ";
u=cus_id_int();
//cin>>u;

s1=cus_id_val(u);
if(s1==0)
throw "\n\n\t\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
cl.add_calldetails(u);
 delay_time(2000);
cout << "\n\n\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");
}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
