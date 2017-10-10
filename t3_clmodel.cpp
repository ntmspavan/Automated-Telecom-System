#include<iostream>
#include<iomanip>
#include<cstdlib>
#include"t3_adm.h"
using namespace std;

void calldetails::view_calldetails(int u)
{
string p2,cid,s2,s3,s4,p3;
int s5,p1,s1,p4;
string sQlstmt,sQlstmt1;
system("clear");

{
s = conn->createStatement();

sQlstmt="SELECT c_id,c_fname,c_lname,city FROM t3_customer where c_id=:1";
s->setSQL(sQlstmt);
s->setInt(1,u);
        r = s->executeQuery();
                r->next();
                

                s1 = r->getInt(1);
                s2 = r->getString(2);
                s3= r->getString(3);
                s4= r->getString(4);
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m======CUSTOMER CALL DETAILS======\033[0m";
                cout<<"\n\n\n\n\t\t\t\t    Customer ID : "<<s1;
                cout<<"\t   Customer name : "<<s2<<" "<<s3;
                cout<<"\t   City : "<<s4<<endl;
                cout<<"\n\n\t\t\t\t    L - Local";
		cout<<"\t   N - National";
		cout<<"\t   I - International";
		cout<<"\n\n\t\t\t\t    LL - Landline";
		cout<<"\t   M - Mobile";
		s->closeResultSet(r);
                conn->terminateStatement(s);

                s = conn->createStatement();
                sQlstmt1="SELECT * FROM t3_callDetails where cid=:1";
                s->setSQL(sQlstmt1);
                s->setInt(1,u);
                        r = s->executeQuery();
 cout<<"\n\n\n\n\t\t\t\033[1;33m"<<setw(27)<<"Duration Of Call"<<setw(26)<<"Type of Call"<<setw(26)<<"Receivers Type"<<setw(24)<<"Receivers Number\033[0m"<<endl;
 cout<<"\t\t\t\t\033[1;34m-------------------------------------------------------------------------------------------\033[0m"<<endl;
        while(r->next())
	{
 p1 = r->getInt(2);
        p2 = r->getString(3);
	p3=r->getString(4);
	p4=r->getInt(5);
	 cout<<"\n\t\t\t\t"<<setw(11)<<p1<<setw(26)<<p2<<setw(26)<<p3<<setw(24)<<p4<<"\n";

	} 
       s->closeResultSet(r);
        conn->terminateStatement(s);
}
}
void calldetails::add_calldetails(int u)
{
calldetails cl;
int cid,duration,rcall;
string toc,modem;
dur:
system("clear");
cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m************ADDING CALL DETAILS************\033[0m";
cout<<"\n\n\n\t\t\t\t\tEnter the Call duration to add call details (MINUTES)"<<setw(30)<<" = ";
duration=cl.cus_id_int_cl();
//cin>>duration;
//cout<<"\n\n\t\t\t\t\tEnter the Type of Call  to add call details(L=Local/N=National/I=International)  = ";
//cin>>toc;
if(duration<0)
goto dur;
else
{
{

    const int size =3; 
    string  tocin[size] = {"L", "N", "I"},toc[size];
    int count = 0;
    int sCount = 0;
    int incorrect = 0;
    bool space = true;


        if  (!space) 
        {
            cout << "\n";
        }

       cout<<"\n\n\t\t\t\t\tEnter the Type of Call  to add call details(L=Local/N=National/I=International)  = ";
        cin >>toc[count];
	modem=toc[count];
        while ((toc[count] != "L" && toc[count] != "N" &&
                toc[count] != "I"))
        {
            cout << "\n\n\t\t\t\t\tYou must enter only L,N or I.......... :  ";
            cin >> toc[count];
		 modem=toc[count];
            space = false;
        }

}

//cout<<"\n\n\t\t\t\t\tEnter the Modem type (LL=Landline/M=Mobile)"<<setw(40)<<" = ";
//cin>>modem;

{

    const int size =3;
    string  modemin[size] = {"LL", "M"},modem[size];
    int count = 0;
    int sCount = 0;
    int incorrect = 0;
    bool space = true;
       if  (!space)
        {
            cout << "\n";
        }
cout<<"\n\n\t\t\t\t\tEnter the Modem type (LL=Landline/M=Mobile)"<<setw(40)<<" = ";
	        cin >>modem[count];
		toc=modem[count];	
        while ((modem[count] != "LL"&& modem[count] != "M"))
        {
            cout << "\n\n\t\t\t\t\tYou must enter only LL or M.......... :  ";
            cin >> modem[count];
		toc=modem[count];
            space = false;
        }

}
rcal:
cout<<"\n\n\t\t\t\t\tEnter The Reciver's Number"<<setw(57)<<" = ";
rcall=cus_id_cl();
if(rcall==0)
{
cout<<"\n\n\t\t\t\t\tThe Given Number Exceeds the Limit....";
goto rcal;
}
s = conn->createStatement();
sQlstmt = "insert into t3_calldetails(cid,duration,toc,modem,rnumber) values(:1,:2,:3,:4,:5)";
s->setSQL(sQlstmt);
s->setInt(1,u);
s->setInt(2,duration);
s->setString(3,modem);
s->setString(4,toc);
s->setInt(5,rcall);
s->executeUpdate();

cout << "\n\n\t\t\t\t\t\t\t\tRecord Updated\n";
  conn->commit();
 conn->terminateStatement(s);
}
}

int calldetails::cus_id_int_cl()
{
string n;
int a,b;
do
{
int i=0;
cin>>n;
while(n[i]!='\0')
{
if(!isdigit(n[i]))
{
if(n[i]==',')
{
 cout<<"comma is valid";
 }
 a=0;
cout<<"\n\n\t\t\t\t\t\t\t\t Invalid Duration....Enter only Numbers....";
cout<<"\n\n\n\t\t\t\t\tEnter the Call duration to add call details (MINUTES)"<<setw(30)<<" = ";
 break;
 }
 else
 a=1;
 i++;
 }

 }while(a!=1);
 stringstream dd(n);
 dd >> b;
 return b;
 }

int calldetails::cus_id_cl()
{
string n;
int a,b;
int i=0;
do
{
cin>>n;
while(n[i]!='\0')
{
if(!isdigit(n[i]))
{
if(n[i]==',')
{
 cout<<"comma is valid";
 }
 a=0;
cout<<"\n\n\t\t\t\t\t\t\t\tYou have entered the Invalid Number\n\n";
cout<<"\n\n\t\t\t\t\tEnter The Reciver's Number"<<setw(57)<<" = ";
 break;
 }
 else
 a=1;
 i++;
 }
 }while(a!=1);
if(i<10)
{
 stringstream dd(n);
 dd >> b;
 return b;
}
else 
return 0;
}
