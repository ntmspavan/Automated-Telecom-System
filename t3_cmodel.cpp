#include<iostream>
#include<cstdlib>
#include"t3_adm.h"

void customer::view_1customer(int no)
{
system("clear");
try{
	int s1;
        string s2,s3,s4,s5,s6,s7,s8;

        Statement *s = conn->createStatement();
        sQlstmt="SELECT count(*)as count FROM t3_customer where c_id=:1";
                s->setSQL(sQlstmt);
                s->setInt(1,no);
              
		 r = s->executeQuery();
		 r->next();
		s1=r->getInt(1);
 s->closeResultSet(r);
        conn->terminateStatement(s);
if(s1==0)
throw "\n\n\t\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else 
{      

	 Statement *s = conn->createStatement();      
	 sQlstmt="SELECT * FROM t3_customer where c_id=:1";
		 s->setSQL(sQlstmt);
                 s->setInt(1,no);
                 r = s->executeQuery();
                 r->next();

		s1=r->getInt(1);
                s2 = r->getString(2);
                s3= r->getString(3);
               // s4= r->getString(4);
                s5= r->getString(5);
                s6= r->getString(6);
                s7=r->getString(7);
		s8=r->getString(9);
cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\033[1;32m----------------DETAILS OF THE CUSTOMER-------------\033[0m\n " << endl;
cout<<" \n\n\t\t\t\t\t\t\t   Customer ID        :  "<<s1;
cout<<" \n\n\t\t\t\t\t\t\t   Customer Name      :  "<<s2<<setw(3)<<s3;
//cout<<" \n\n\t\t\t\t\t   Password           :  "<<s4;
cout<<" \n\n\t\t\t\t\t\t\t   Address            :  "<<s5;
cout<<" \n\n\t\t\t\t\t\t\t   City               :  "<<s6;
cout<<" \n\n\t\t\t\t\t\t\t   Email Id           :  "<<s8;
cout<<" \n\n\t\t\t\t\t\t\t   Connection Status  :  "<<s7;

    s->closeResultSet(r);
        conn->terminateStatement(s);
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m"<<msg;
}
}
void customer::view_allcustomer()
{
 string s2,s3,s4,s5,s6,s7,s8;
int s1;
        system("clear");
        Statement *s = conn->createStatement();
        sQlstmt="SELECT * FROM t3_customer ORDER BY c_id asc";
                s->setSQL(sQlstmt);

                r = s->executeQuery();
cout<<"\n\n\033[1;33m"<<setw(27)<<"Customer Id"<<setw(26)<<"Customer Name"<<setw(23)<<"Email Id"<<setw(24)<<"Address"<<setw(24)<<"City"<<setw(24)<<"Status\033[0m"<<endl;
                cout<<"\t\033[1;34m------------------------------------------------------------------------------------------------------------------------------------------------\033[0m"<<endl;

while( r->next())

{
                s1=r->getInt(1);
                s2 = r->getString(2);
                s3= r->getString(3);
                s4= r->getString(4);
                s5= r->getString(5);
                s6= r->getString(6);
                s7=r->getString(7);
		 s8=r->getString(9);
 cout<<"\n\t\t"<<setw(11)<<s1<<setw(26)<<s2<<setw(23)<<s8<<setw(24)<<s5<<setw(24)<<s6<<setw(24)<<s7<<setw(15)<<"\n";     

}
cout << "\n\n\n\t\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
s->closeResultSet(r);
        conn->terminateStatement(s);
system("clear");
}
void customer::view_customer(int u)
{
string s2,s3,s4,s5,s6,s7,s8;
int cid,s1;
system("clear");

Statement *s = conn->createStatement();
sQlstmt="SELECT * FROM t3_customer where c_id=:1";
s->setSQL(sQlstmt);
s->setInt(1,u);
r = s->executeQuery();
r->next();
cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\033[1;32m----------------DETAILS OF THE CUSTOMER-------------\033[0m\n " << endl;
s1 = r->getInt(1);
s2 = r->getString(2);
s3= r->getString(3);
s4= r->getString(4);
s5= r->getString(5);
s6= r->getString(6);
s7=r->getString(7);
s8=r->getString(9);
cout<<" \n\n\t\t\t\t\t\t\t    Customer ID               : "<<s1;
cout<<" \n\n\t\t\t\t\t\t\t    Land Line Number is       : "<<s1;
cout<<" \n\n\t\t\t\t\t\t\t    Customer Name             : "<<s2<<setw(3)<<s3;
cout<<" \n\n\t\t\t\t\t\t\t    Password                  : "<<s4;
cout<<" \n\n\t\t\t\t\t\t\t    Address                   : "<<s5;
cout<<" \n\n\t\t\t\t\t\t\t    City                      : "<<s6;
cout<<" \n\n\t\t\t\t\t\t\t    Email Id                  : "<<s8;
cout<<" \n\n\t\t\t\t\t\t\t    Connection Status         : "<<s7;
s->closeResultSet(r);
 conn->terminateStatement(s);
}
void customer::chg_firstname(int u)
{
int cid;
string fname;
system("clear");

	cout<<"\n\n\n\n\n\n\n\t\t\t\033[1;32m------------------ENTER THE DETAILS FOR CHANGE REQUEST------------------\033[0m";
        cout<<"\n\n\t\t\t\t\t\tEnter New First name : ";
        cin>>fname;
               s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'FIRST_NAME',:2,'PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->setString(2,fname);
                s->executeUpdate();
	conn->commit();
        conn->terminateStatement(s);

}
void customer::chg_lastname(int u)
{
int cid;
string lname;
system("clear");
	 cout<<"\n\n\n\n\n\n\n\t\t\t\033[1;32m------------------ENTER THE DETAILS FOR CHANGE REQUEST------------------\033[0m";
        cout<<"\n\n\t\t\t\t\t\tEnter New Last name : ";
        cin>>lname;
               s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'LAST_NAME',:2,'PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->setString(2,lname);
                s->executeUpdate();
		 conn->commit();
        conn->terminateStatement(s);

}
void customer::chg_address(int u)
{
int cid;
string addr;
system("clear");

	 cout<<"\n\n\n\n\n\n\n\t\t\t\033[1;32m------------------ENTER THE DETAILS FOR CHANGE REQUEST------------------\033[0m";
        cout<<"\n\n\t\t\t\t\t\tEnter New Address : ";
        cin>>addr;
               s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'ADDRESS',:2,'PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->setString(2,addr);
                s->executeUpdate();
               conn->commit();
        conn->terminateStatement(s);

}
void customer::view_status(int no)
{

string s1,s2,s3;
system("clear");
        Statement *s = conn->createStatement();
        sQlstmt="SELECT * FROM t3_chgRequest where cid=:1";
                s->setSQL(sQlstmt);
                s->setInt(1,no);
                r = s->executeQuery();
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\tCUSTOMER ID :"<<no<<endl;
               while(r->next())
{

                s2 = r->getString(3);
                s3= r->getString(5);
		s1=r->getString(1);
cout<<"\t\t\t\t\t\tRequest Id : "<<s1<<endl;
cout<<"\t\t\t\t\t\tChange Request :"<<s2<<endl;
cout<<"\t\t\t\t\t\tStatus:"<<s3<<endl;
cout<<"\n\n";
}
 s->closeResultSet(r);
        conn->terminateStatement(s);
}

