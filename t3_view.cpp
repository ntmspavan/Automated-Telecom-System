#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
void test::admin_view()
{
test t;
customer c;
billgeneration bg;
calldetails cl;
system("clear");
char ch[2],a1[2],n[2],n1[2],ch1[2],ch2[2],ch3[2];
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m****************WELCOME CUSTOMER REPRESENTATIVE*****************\033[0m"<<endl;
//system("clear");	
do
{
//system("clear");
cout<<"\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /              '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\t\t\t\t            |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :                ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";


try
{
		 
cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\033[1;32m----------CUSTOMER REPRESENTATIVE MENU----------\033[0m"<<endl;
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '1' for Add New Customer";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '2' for Update Customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '3' for Change Connection status";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '4' for View Customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '5' for View Customer Request";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '6' for Customer Call Details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '7' for Bill Generation";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '8' for Logout";
cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter your choice : ";

                  cin>>ch;
        	
if((ch[0]>64&&ch[0]<91)||(ch[0]>96&&ch[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";
else if(ch[0]>'8'&&ch[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(ch[0]>'0'&&ch[0]<'9'&&ch[1]<'0')
{		  
switch(ch[0])
{
case '1':
{
system("clear");
do
{
try
{ 
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t \033[1;32m---------- Adding Customer Details-------------\033[0m"<<endl;
cout<<"\n\n\t\t\t\t\t\t\t\tPress '1' for Add New Customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '2' for Add Plan Details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '3' for Exit";                               
cout<<"\n\n\n\t\t\t\t\t\t\tEnter your Choice : ";
cin>>a1;
if((a1[0]>64&&a1[0]<91)||(a1[0]>96&&a1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(a1[0]>'3'&&a1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(a1[0]>'0'&&a1[0]<'4'&&a1[1]<'0')
{       
switch(a1[0])
{
case '1':
t.add_customer();
break;
case '2':
t.add_plandetails();
cout<<"\n\n\t\t\t\t\t\t\tPress any key to continue......";
char g;
cin>>g;
system("clear");
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
}
catch(const char* msg)
{
t.delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
}while(a1[0]!='3');		
}		
break;
case '2':  
{
system("clear");	
do
 {
 try
{
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t \033[1;32m---------- Update Customer Details-------------\033[0m\n";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '1' for Update First Name";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '2' for Update Last Name";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '3' for Update Address";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '4' for Update City";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '5' for Update Plan Detail";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '6' for Exit\n\n\n\t\t\t\t\t\t\tEnter your Choice : ";
cin>>n;
                     
if((n[0]>64&&n[0]<91)||(n[0]>96&&n[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(n[0]>'6'&&n[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";


else if(n[0]>'0'&&n[0]<'7'&&n[1]<'0')
{
switch(n[0])
{
case '1':
t.update_cfname();
break;
case '2':
t.update_clname();
break;
case '3':
t.update_caddress();
break;
case '4':
t.update_ccity();
break;
case '5':
t.update_cplan();
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
}

catch(const char* msg)
{
t.delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
}while(n[0]!='6');
}
break;
case '3':
			
				
system("clear");	
do
{
try{
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t \033[1;32m---------------Change  Connection status for  Customer----------------\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tPress '1' to Activate Connection";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '2' to Deactivate Connection";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '3' to Exit\n\n\n\t\t\t\t\t\t\t\tEnter your Choice : ";
cin>>n1;
if((n1[0]>64&&n1[0]<91)||(n1[0]>96&&n1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(n1[0]>'3'&&n1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(n1[0]>'0'&&n1[0]<'4'&&n1[1]<'0')
{
switch(n1[0])
{
case '1':
t.connect_ccustomer();
break;
case '2':
t.disconnect_ccustomer();
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
		}
catch(const char* msg)
{
t.delay_time(1000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
}while(n1[0]!='3');
break;
case '4':
c.customer_c();
break;
case '5':
int ch3[2];
system("clear");              
do
{
try
{
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m--------------Details of Customer Request------------\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tPress '1' for View Customer Request";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '2' for Update Status";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '3' for Exit";
cout<<"\n\n\n\t\t\t\t\t\t\tEnter your choice : ";
cin>>ch;
if((ch[0]>64&&ch[0]<91)||(ch[0]>96&&ch[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(ch[0]>'3'&&ch[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(ch[0]>'0'&&ch[0]<'4'&&ch[1]<'0')         
{
switch(ch[0])
{
case '1':
t.view_cusrequest();
delay_time(1000);
break;
case '2':
t.update_creqstatus();
delay_time(2000);
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
}

catch(const char* msg)
{
t.delay_time(3000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;

} 
}while(ch[0]!='3');
system("clear");
break;
case '6':
cl.calldet_cl();
break;
case '7':
bg.gen_bill_bg();
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only the Numbers in that range....";
}
catch(const char* msg)
{
delay_time(2000);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
 }while(ch[0]!='8');
}

                                                                            


void test::user_view(int u)
{
test t;
plan p;
customer c;
calldetails cl;
billgeneration bg;
char cg1[2],cr1[2],cr2[2];
system("clear");
do{
try {
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /              '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\t\t\t\t            |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :                ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";

cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m**************** WELCOME TO CUSTOMER MENU *****************\033[0m"<<endl;

cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '1' for View Customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '2' for View Plan and Handset details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '3' for View call details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '4' for View Bill Details";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '5' for Change Request";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '6' for Change Password";
cout<<"\n\n\t\t\t\t\t\t\t\t\tPress '7' for Exit";
cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter the Choice : ";

cin>>cg1;

if((cg1[0]>64&&cg1[0]<91)||(cg1[0]>96&&cg1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(cg1[0]>'7'&&cg1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(cg1[0]>'0'&&cg1[0]<'8'&&cg1[1]<'0')
{
switch (cg1[0])

{
case '1':

c.view_ccustomer(u);
break;
case '2':
p.view_plan(u);
break;
case '3':
cl.view_calldet_cl(u);
break;
case '4':
bg.view_billdet_bg(u);
break;
case '5':
system("clear");
do
 { 
try
{
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\033[1;32m------------------------------CHANGE REQUEST-----------------------------\033[0m\n\t\t\t\t\t\t\t\t\t";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '1' for Change customer Details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '2' for Change plan Details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '3' for Change Handset details";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '4' for View Status";
cout<<"\n\n\t\t\t\t\t\t\t\tPress '5' for Exit to user main page";
cout<<"\n\n\n\t\t\t\t\t\tEnter your choice : ";
cin>>cr1;
if((cr1[0]>64&&cr1[0]<91)||(cr1[0]>96&&cr1[0]<123))
throw "\n\n\t\t\t\t\t\tYou have entered the character.. Enter only Numbers.... ";

else if(cr1[0]>'6'&&cr1[0]=='\0')
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number.... ";

else if(cr1[0]>'0'&&cr1[0]<'7'&&cr1[1]<'0')
{
switch(cr1[0])
{
case '1':
c.chg_req_cusdet_c(u);
break;
case '2':
p.chg_req_plan_p(u);
break;

case '3':
p.chg_req_hand_p(u);
break;
case '4':
c.view_cus_req_c(u);
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only  Numbers in that range....";
}
catch(const char* msg)
{
t.delay_time(1000);
cout<<"\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m"<<msg;
}
}while(cr1[0]!='5');
break;

case '6':
system("clear");
cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;32m-----------------CHANGE PASSWORD-----------------\033[0m";
t.check_password(u);
break;
}
}
else
throw "\n\n\t\t\t\t\t\tYou have entered the invalid option...Enter only  Numbers in that range....";
system("clear");
}
catch(const char* msg)
{
t.delay_time(3000);
cout<<"\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m\n\t"<<msg;
}
}while(cg1[0]!='7');
}
void test::main_plan()
{
plan p;
p.plan_view();
}

 
