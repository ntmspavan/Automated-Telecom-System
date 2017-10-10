#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
using namespace std;

void customer::view_c1customer()
{
        customer c;
        int cid4;
         cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cid4=cus_id_int();	
 //cin>>cid4;
	 c.view_1customer(cid4);
	cout << "\n\n\n\t\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");
}
void customer::chg_cfirstname(int u)
{
        customer c;
        c.chg_firstname(u);
 delay_time(4000);

}
void customer::chg_clastname(int u)
{
        customer c;
        c.chg_lastname(u);
 delay_time(4000);

}
void customer::chg_caddress(int u)
{
        customer c;
        c.chg_address(u);
 delay_time(4000);

}
void customer::view_ccustomer(int u)
{
        customer c;
        c.view_customer(u);
//delay_time(3000);
 cout << "\n\n\n\t\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");
}
void customer::view_cstatus(int u)
{
	customer c;
        c.view_status(u);
 delay_time(4000);
cout << "\n\n\n\t\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");
}

