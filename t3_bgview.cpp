#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
void billgeneration::gen_bill_bg()
{
billgeneration bg;
char n1[2];
system("clear");       
do
{
try{
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m --------------- Bill Generation for Customer----------------\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tPress '1' for Generate Bill";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '2' for View Bill";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '3' for Exit";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter your Choice : ";
cin>>n1;
if((n1[0]>64&&n1[0]<91)||(n1[0]>96&&n1[0]<123))
throw "\n\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(n1[0]>'4'&&n1[0]=='\0')
throw "\n\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(n1[0]>'0'&&n1[0]<'5'&&n1[1]<'0')
{
switch(n1[0])
{
case '1':
bg.generate_cbill();
break;
case '2':
bg.view_cbill();
break;
}
}
else
throw "\n\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
                                }
catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}

                                }while(n1[0]!='3');

					}
				
