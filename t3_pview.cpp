#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
void plan::plan_view()
{
plan p;
test t;
char n[2];
system("clear");
do
{
try
{
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\033[1;32m-------------------------- PLAN DETAILS ------------------------------\033[0m\n";
cout<<"\n\n\n\t\t\t\t\t\t\tPress '1' for View Plan Details";
cout<<"\n\n\t\t\t\t\t\t\tPress '2' for Exit";
cout<<"\n\n\t\t\t\t\t\tEnter your choice : ";
cin>>n;
if((n[0]>64&&n[0]<91)||(n[0]>96&&n[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(n[0]>'2'&&n[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(n[0]>'0'&&n[0]<'4'&&n[1]<'0')
                {
switch(n[0])
{
case '1':
p.p_plan();
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers....";
                                }
catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}

}while(n[0]!='2');
}
void plan::chg_req_plan_p(int u)
{
plan p;
char cr1[2];

system("clear");
do{
try
{
cout<<"\n\n\n\n\n\n\t\t\t\t\t\033[1;32m--------------------------CHANGE PLAN DETAILS---------------------------\033[0m\n";
cout<<"\n\n\t\t\t\t\t\t\tCHOOSE NEW PLAN";
cout<<"\n\n\t\t\t\t\t\tPress '1' for Basic";
cout<<"\n\n\t\t\t\t\t\tPress '2' for Gold";
cout<<"\n\n\t\t\t\t\t\tPress '3' for Exit";
cout<<"\n\n\n\t\t\t\t\t\tEnter Your Choice :  ";
cin>>cr1;
if((cr1[0]>64&&cr1[0]<91)||(cr1[0]>96&&cr1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(cr1[0]>'3'&&cr1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(cr1[0]>'0'&&cr1[0]<'4'&&cr1[1]<'0')

                {
switch(cr1[0])
{

case 1:
p.chg_ctobasic(u);
break;
case 2:
p.chg_ctogold(u);
break;
case 3:
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
}
catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}

}while(cr1[0]!='3');

}


void plan::chg_req_hand_p(int u)
{
plan p;
test t;
char cr1[2];
system("clear");
do
{
try
{
cout<<"\n\n\n\n\n\n\t\t\t\t\t\033[1;32m--------------------------CHANGE HANDSET DETAILS---------------------------\033[0m\n";
cout<<"\n\n\t\t\t\t\t\t\tCHOOSE NEW HANDSET DETAILS";
cout<<"\n\n\n\t\t\t\t\t\t\tPress '1' for Buyout";
cout<<"\n\n\n\t\t\t\t\t\t\tPress '2' for Rental";
cout<<"\n\n\n\t\t\t\t\t\t\tPress '3' for Exit";
cout<<"\n\n\n\n\t\t\t\t\tEnter your Choice : ";
cin>>cr1;
if((cr1[0]>64&&cr1[0]<91)||(cr1[0]>96&&cr1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(cr1[0]>'3'&&cr1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";
else if(cr1[0]>'0'&&cr1[0]<'4'&&cr1[1]<'0')
{
	
switch(cr1[0])
{
case '1':
p.chg_ctobuyout(u);
break;
case '2':
p.chg_ctorental(u);
break;
 case '3':
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
                                }
catch(const char* msg)
{
delay_time(1000);
cout<<"\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}

}while(cr1[0]!='3');
}

