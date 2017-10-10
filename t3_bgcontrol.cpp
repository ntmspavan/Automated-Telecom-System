#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
void billgeneration::generate_cbill()
{
system("clear");
billgeneration bg;
try{
int cid,s1;
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m============BILL GENERATION=============\033[0m";
cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter the Customer ID to generate the Bill : ";
cid=cus_id_int();
//cin>>cid;
s1=cus_id_val(cid);
if(s1==0)
throw "\n\n\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
bg.generate_bill(cid);
 delay_time(1000);
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
void billgeneration::view_cbill()
{
system("clear");
try{
billgeneration bg;
int cid,s1;
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m============BILL GENERATION=============\033[0m";
cout<<"\n\n\n\n\n\t\t\t\t\t\t\tEnter the Customer ID to View the Bill : ";
cid=cus_id_int();
//cin>>cid;
s1=cus_id_val(cid);
if(s1==0)
throw "\n\n\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
bg.view_bill(cid);
 delay_time(1000);
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
void billgeneration::view_billdet_bg(int u)
{
billgeneration bg;
bg.view_bill(u);
}
