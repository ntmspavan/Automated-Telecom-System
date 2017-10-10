#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
using namespace std;
void customer::customer_c()
{
char ch3[3];
customer c;
system("clear");
do
{
		
try
{

cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m-------------View Customer Details----------------\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t\t\tPress '1' for View Single Customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '2' for View all Customer details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '3' for Exit";
cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter your choice:";
                               cin>>ch3;

//cout<<ch3[0];
cout<<ch3[1];	
if((ch3[0]>64&&ch3[0]<91)||(ch3[0]>96&&ch3[0]<123))
throw "\tYou have entered the character.. Enter only Numbers.... ";
else if(ch3[0]>'3'&&ch3[0]=='\0'&&ch3[1]>'0')
throw "\tYou have entered an invalid number .. Enter valid Number.... ";
else if(ch3[0]>'0'&&ch3[0]<'4'&&ch3[1]<'0')
{
switch(ch3[0])
{
case '1':
c.view_c1customer();
break;
case '2':
c.view_allcustomer();
break;
}
}
else
throw "\n\n\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
                                }

catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
}while(ch3[0]!='3');

}
void customer::chg_req_cusdet_c(int u)
{
char cr2[2];
customer c;
system("clear");
do
{
try{
cout<<"\n\n\n\n\n\n\t\t\t\t\t\033[1;32m--------------CHANGE REQUEST FOR CUSTOMER DETAILS---------------\033[0m\n";
cout<<"\n\n\t\t\t\t\t\t\tPress '1' for First name";
cout<<"\n\n\t\t\t\t\t\t\tPress '2' for Last Name";
cout<<"\n\n\t\t\t\t\t\t\tPress '3' for Address";
cout<<"\n\n\t\t\t\t\t\t\tPress '4' for Exit";
cout<<"\n\n\t\t\t\t\t\tEnter your Choice : ";
cin>>cr2;
if((cr2[0]>64&&cr2[0]<91)||(cr2[0]>96&&cr2[0]<123))
throw "\n\n\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(cr2[0]>'4'&&cr2[0]=='\0')
throw "\n\n\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(cr2[0]>'0'&&cr2[0]<'5'&&cr2[1]<'0')

                {    
    switch(cr2[0])
         {
        case '1':
        c.chg_cfirstname(u);
        cout<<"\n\n\t\t\t\t\t\tRequest Submitted Successfully to the Customer Representative\n";
	c.delay_time(3000);
        break;
        case '2':
        c.chg_clastname(u);
         cout<<"\n\n\t\t\t\t\t\tRequest Submitted Successfully to the Customer Representative\n";
        c.delay_time(3000);
	break;
        case '3':
        c.chg_caddress(u);
         cout<<"\n\n\t\t\t\t\t\tRequest Submitted Successfully to the Customer Representative\n";
        c.delay_time(3000);
	break;
        case '4':
        break;
        }
}
else
throw "\n\n\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
                      }
catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m"<<msg;
}
}while(cr2[0]!='4');
}
void customer::view_cus_req_c(int u)
{
customer c;
system("clear");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\033[1;32m-------------------CHANGE REQUEST STATUS-------------------\033[0m";
c.view_cstatus(u);
}
