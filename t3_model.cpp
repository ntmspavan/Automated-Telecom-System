#include<iostream>
#include<cstdlib>
#include"t3_adm.h"
#include <cstring>
#include<cctype>
#include<stdio.h>
#include<string>
#include<sstream>
#include <iomanip>
string test::authadb(int no)
{
	int a;
        string b;
        Statement *s=conn->createStatement("select * from t3_admin where a_id =:1");
	s->setInt(1,no);
	ResultSet *r = s->executeQuery();
	r->next();
	a = r->getInt(1);
	b = r->getString(2);
	conn->terminateStatement(s);
	return b;
     
  }    

string test::authcdb(int no)
{
        int a;
        string b;
        Statement *s=conn->createStatement("select * from t3_customer where c_id =:1");
	s->setInt(1,no);
	ResultSet *r = s->executeQuery();
	r->next();
	a = r->getInt(1);
	b = r->getString(4);
	conn->terminateStatement(s);
	return b;
}
string test::printname(int u)
{

        string a,b,c;
        Statement *s=conn->createStatement("select upper(c_fname),upper(c_lname) from t3_customer where c_id =:1");
        s->setInt(1,u);
        ResultSet *r = s->executeQuery();
        r->next();
        a = r->getString(1);
        b = r->getString(2);
	c=a+" "+b;
       // c=toupper(c);
        conn->terminateStatement(s);
        return c;

}
void test::del_pwd(int u)
{

	int no;
	string a,def_pwd;
	s=conn->createStatement("select dob from t3_customer where c_id =:1");
        s->setInt(1,u);
        r = s->executeQuery();
        r->next();
        a = r->getString(1);
	cout<<a;
	 s->closeResultSet(r);
	conn->terminateStatement(s);
stringstream convert;
	string sr;
convert << u;
sr= convert.str();
def_pwd=sr+"@"+a;
   
	Statement *s=conn->createStatement();
        sQlstmt = "update t3_customer set c_pwd =:1  where c_id = :2";
              s->setSQL(sQlstmt);
	      s->setString(1,def_pwd);
              s->setInt(2,u);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);
}
int test::sel_count(int u)
{
int a;
 s=conn->createStatement("select count from t3_customer where c_id =:1");
        s->setInt(1,u);
        ResultSet *r = s->executeQuery();
        r->next();
       a = r->getInt(1);
       conn->terminateStatement(s);
       return a;
       }
void test::update_count(int u)
{
Statement *s=conn->createStatement();
              sQlstmt = "update t3_customer set count=1  where c_id = :1";
              s->setSQL(sQlstmt);
              s->setInt(1,u);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);

}
void test::last_login(int u)
{
string d;
s=conn->createStatement();
sQlstmt = "select to_char(max(logon), 'Month DD, YYYY HH24:MI:SS') from login where cid=:1";
              s->setSQL(sQlstmt);
              s->setInt(1,u);
              r = s->executeQuery();
              r->next();
	d=r->getString(1);
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t Your last login is :  "<<d;
s->closeResultSet(r);
conn->terminateStatement(s);      

}
void test::insert_login(int u)
{
		s=conn->createStatement();
                sQlstmt = "insert into login values(:1,current_timestamp)";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
		s->executeUpdate();
		conn->commit();
		conn->terminateStatement(s);
}

int test::cus_id_val(int u)
{
int s1;
Statement *s = conn->createStatement();
        sQlstmt="SELECT count(*)as count FROM t3_customer where c_id=:1 and status='active'";
                s->setSQL(sQlstmt);
               s->setInt(1,u);
                 r = s->executeQuery();
                 r->next();
                s1=r->getInt(1);
 s->closeResultSet(r);
        conn->terminateStatement(s);
return s1;
}
int test::cus_id_val1(int u)
{
int s1;
Statement *s = conn->createStatement();
        sQlstmt="SELECT count(*)as count FROM t3_customer where c_id=:1";
                s->setSQL(sQlstmt);
               s->setInt(1,u);
                 r = s->executeQuery();
                 r->next();
                s1=r->getInt(1);
 s->closeResultSet(r);
        conn->terminateStatement(s);
return s1;
}

int test::cus_rid_val(int u)
{
int s1;
Statement *s = conn->createStatement();
        sQlstmt="SELECT count(*)as count FROM t3_chgRequest where crid=:1";
                s->setSQL(sQlstmt);
               s->setInt(1,u);
                 r = s->executeQuery();
                 r->next();
                s1=r->getInt(1);
 s->closeResultSet(r);
        conn->terminateStatement(s);
return s1;
}

void test::forgot_pwd(int u)
{
	test t;
	string dob,email,a,b,c;
	int count=0,count1=0;      
	s=conn->createStatement();
        sQlstmt = "select dob,email from t3_customer where c_id=:1";
              s->setSQL(sQlstmt);
              s->setInt(1,u);
              r = s->executeQuery();
		 r->next();
        a = r->getString(1);
        b = r->getString(2); 
	s->closeResultSet(r);
	conn->terminateStatement(s);
birth:
system("clear"); 
cout<<"\n\n\n\t\t\t\t\033[1;32m----------------PASSWORD RETRIEVAL MENU--------------\033[0m\n";
        cout<<"\n\n\t\t\t\t\tEnter Your Date Of Birth(DD/MM/YYYY): ";
        cin>>dob;

	if(a.compare(dob)==0)
		{
	mail:
	cout<<"\n\n\t\t\t\t\tEnter Your Email Id : ";
		cin>>email;
	 if(b.compare(email)==0)
         {
	
		s=conn->createStatement();
	        sQlstmt = "select c_pwd from t3_customer where c_id=:1";
              s->setSQL(sQlstmt);
              s->setInt(1,u);
              r = s->executeQuery();
              r->next();
              c = r->getString(1);
    		cout<<"\n\n\t\t\t\t\tYour Password : "<<c;
		s->closeResultSet(r);
              conn->terminateStatement(s);
}
else 
{
 count++;
 if(count<2)
{                   
cout<<"\n\n\t\t\t\t\tThe Entered Email Id is... Incorrect..";
goto mail;
}
else
{
cout<<"\n\n\t\t\t\tYou have Entered the Email Id Incorrectly for 2 times";
cout<<"\n\n\t\t\t\tYour Account is Locked.... Contact Customer Representative for Further Details......";
cout<<"before delpass";
t.del_pwd(u); 
}
}
}
else
{
count1++;
 if(count1<2)
{
cout<<"\n\n\t\t\t\t\tThe Entered Date Of Birth is... Incorrect..";
goto birth;
}
else
{
cout<<"\n\n\t\t\t\tYou have Entered the Date Of Birth Incorrectly for 2 times";
cout<<"\n\n\t\t\t\tYour Account is Locked.... Contact Customer Representative for Further Details......";
t.del_pwd(u);
}
}
}


void test::add_customer()
{
test t;
int s2;
string s3,dob,email,def_pwd;
char cus_add[100];
//string stringLength = sizeof(alphanum) - 1;


		system("clear");
cout<<"\n\n\n\n\t\t\t\t\t\033[1;32m-------------------ADDING CUSTOMER DETAILS----------------------\033[0m\n\n";
cin.ignore();
add_cus:
cout<<"\n\t\t\t\t\t\t\tEnter First name                 : ";
//cin>>cus_fname;
//cin.ignore();
getline(cin,cus_fname);
if(!(cus_fname.empty()))
{
int sr=add_cus_val(cus_fname);
if(sr==1)
{
goto add_cus;
}
else
{
cout<<"";
}
}
else
{
cout<<"\n\n\t\t\t\tThe Field is Left Blank ..Please Enter The Data...\n\n";
goto add_cus;
}
add_cus_lname:
cout<<"\n\t\t\t\t\t\t\tEnter Last name                  : ";
cin>>cus_lname;

int sr1=add_cus_val(cus_lname);

if(sr1==1)
{
goto add_cus_lname;
}
else
{
cout<<"";
}


/*srand(time(0));
    for(int z=0; z < 5; z++)
    {
        cus_pwd +=alphanum[rand() % stringLength];
    }

*/

cus_addr:
cout<<"\n\t\t\t\t\t\t\tEnter Address                    : ";
cin.ignore();
cin.getline(cus_add,20);
if(strlen(cus_add)==0)
{
cout<<"\n\n\t\t\t\tThe Field is Left Blank ..Please Enter The Data...\n\n";
goto cus_addr;
}
//cin.ignore();
add_city:
cout<<"\n\t\t\t\t\t\t\tEnter City                       : ";
//cin>>cus_city;
//cin.ignore();
getline(cin,cus_city);
if(!(cus_city.empty()))
{
int sr2=add_cus_val(cus_city);
        if(sr2==1)
        {
        goto add_city;
        }
}
else
{
cout<<"\n\n\t\t\t\tThe Field is Left Blank ..Please Enter The Data...\n\n";
goto add_city;
}



//cout<<"\n\t\t\t\t\t\t\tEnter Date Of Birth(DD/MM/YYYY)  : ";
//cin>>dob;
//date validation function
dob=date_val();

cin.ignore();
mail:
cout<<"\n\t\t\t\t\t\t\tEnter Email Id                   : ";
//cin>>email;

//cin.ignore();
getline(cin,email);
if(!(email.empty()))
{
int g1;
g1=email_val(email);
if(g1==0)
{
cout<<"\n\n\t\t\t\tEntered email id is Incorrect form....Enter Correct form  'example@abc.com'...... ";
goto mail;
}
else
{
		s=conn->createStatement();
                sQlstmt = "insert into t3_customer(c_fname,c_lname,c_addr,city,dob,email) values(:1,:2,:3,:4,:5,:6)";
                s->setSQL(sQlstmt);
                s->setString(1,cus_fname);
                s->setString(2,cus_lname);
                s->setString(3,cus_add);
                s->setString(4,cus_city);
                s->setString(5,dob);
                s->setString(6,email);
		
		s->executeUpdate();
        cout << "\n\n\t\t\t\t\t\t\tNew Customer Added Successfully...";
        conn->commit();
        conn->terminateStatement(s);
}
}
else
{
cout<<"\n\n\t\t\t\tThe Field is Left Blank ..Please Enter The Data...\n\n";
goto mail;
}



        s = conn->createStatement();
        sQlstmt="SELECT c_id,dob FROM t3_customer where email=:1";
                s->setSQL(sQlstmt);
                s->setString(1,email);
	        r = s->executeQuery();
                r->next();
                s2 = r->getInt(1);
                s3= r->getString(2);
int id;
id=s2;
stringstream convert;
string sr;
convert <<id;
sr= convert.str();
def_pwd=sr+"@"+s3;
 
s->closeResultSet(r);	
conn->terminateStatement(s);
 s = conn->createStatement();
sQlstmt = "update t3_customer set c_pwd =:1 where c_id =:2";
              s->setSQL(sQlstmt);
              s->setInt(2,id);
	s->setString(1,def_pwd); 
      s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);

cout<<"\n\n\n\t\t\t\t\t\t\t\tCustomer id : "<<id;
t.delay_time(2000);
cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");


}
void test::add_plandetails()
{
plan p;
char j;
int cus_id,plan,handset,rent,s1;
system("clear");
try
{
cout<<"\n\n\n\t\t\t\t\t\t\033[1;32m**************ADDING PLAN DETAILS***************\033[0m";
cout<<"\n\n\n\t\t\t\t\t\t  Enter the customer  Id : ";
cin>>cus_id;

s1=cus_id_val(cus_id);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
p.p_plan();
cout<<"\n\n\t\t\t\t\t\tpress any key to continue        : ";
cin>>j;

system("clear");
cout<<"\n\n\n\t\t\t\t\t\033[1;32m**************ADDING PLAN DETAILS***************\033[0m";
cout<<"\n\n\n\t\t\t\t\t\033[1;32m-------------------------SELECT PLAN--------------------------\033[0m\n\n\t\t\t\t\t\t\tPress '1' for Basic plan\n\n\t\t\t\t\t\t\tPress '2' for Gold plan";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>plan;
if(plan==1)
{
plan=1;
cout<<"\n\n\n\t\t\t\t\t\tBASIC PLAN SELECTED";
cout<<"\n\n\n\n\t\t\t\t\t\033[1;32m------------------------CHOOSE HANDSET------------------------\033[0m\n\n\t\t\t\t\t\t\tPress '1' for Buyout\n\n\t\t\t\t\t\t\tPress '2' for Rental";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>handset;
if(handset==1)
{
rent=0;
}
else {
rent=30;
}
}
else
{
plan=2;
cout<<"\n\n\t\t\t\t\t\t\tGOLD PLAN SELECTED"<<endl;
cout<<"\n\n\n\n\t\t\t\t\t\033[1;32m------------------------CHOOSE HANDSET-------------------------\033[0m\n\n\t\t\t\t\t\t\tPress '1' for Buyout\n\n\t\t\t\t\t\t\tPress '2' for Rental";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>handset;
if(handset==1)
{
rent=0;
}
else
{
rent=50;
}
}
Statement *s=conn->createStatement();
 sQlstmt = "insert into t3_ph(cid,pid,hid,rent) values(:1,:2,:3,:4)";
  s->setSQL(sQlstmt);
  s->setInt(1,cus_id);
  s->setInt(2,plan);
  s->setInt(3,handset);
  s->setInt(4,rent);
  s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tPlan Details Added Successfully for Customer Id  :  "<<cus_id<<endl;
  conn->commit();
  conn->terminateStatement(s);
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}

  }
void test::update_fname(int no)
{
	string fname;
	update_fname:
	cout<<"\n\n\t\t\t\t\t\t\t\tEnter the First Name to Update : ";
	//cin>>fname;
	cin.ignore();
	getline(cin,fname);
	if(!(fname.empty()))
	{
	int sr1=add_cus_val(fname);
	if(sr1==1)
	{
	goto update_fname;
	}
	Statement *s=conn->createStatement();
	sQlstmt = "update t3_customer set c_fname = :1  where c_id = :2";
               s->setSQL(sQlstmt);
               s->setString(1,fname);
               s->setInt(2,no);
               s->executeUpdate();
               conn->commit();
               conn->terminateStatement(s);
}
else
{
cout<<"\n\n\t\t\t\tThe Field is Left Blank ..Please Enter The Data...\n\n";
goto update_fname;
}
}
void test::update_lname(int no)
{
	string lname;
	 update_lname:
	cout<<"\n\n\t\t\t\t\t\t\t\tEnter the Last Name to Update : ";
	cin>>lname;
	int sr1=add_cus_val(lname);
        if(sr1==1)
        {
        goto update_lname;
        }

	Statement *s=conn->createStatement();
	sQlstmt = "update t3_customer set c_lname = :1  where c_id = :2";
              s->setSQL(sQlstmt);
              s->setString(1,lname);
              s->setInt(2,no);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);

}
void test::update_address(int no)
{
	char addr[150];
	cout<<"\n\n\t\t\t\t\t\t\t\tEnter the Address to Update : ";
		
	cin.ignore();
	cin.getline(addr,20);

	Statement *s=conn->createStatement();
	sQlstmt = "update t3_customer set c_addr = :1  where c_id = :2";
              s->setSQL(sQlstmt);
              s->setString(1,addr);
              s->setInt(2,no);
              s->executeUpdate();
 	      conn->commit();
              conn->terminateStatement(s);
}
void test::update_city(int no)
{
	string city;
	update_city:
	cout<<"\n\n\t\t\t\t\t\t\t\tEnter the city to Update : ";
	cin>>city;
	int sr1=add_cus_val(city);
        if(sr1==1)
        {
        goto update_city;
        }

	Statement *s=conn->createStatement();
	sQlstmt = "update t3_customer set city = :1  where c_id = :2";
              s->setSQL(sQlstmt);
              s->setString(1,city);
              s->setInt(2,no);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);
}
void test::disconnect_customer(int no)
{
	Statement *s=conn->createStatement();
	sQlstmt = "update t3_customer set status = 'disconnect'  where c_id = :1";
              s->setSQL(sQlstmt);
              s->setInt(1,no);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);
}
void test::connect_customer(int no)
{
        Statement *s=conn->createStatement();
        sQlstmt = "update t3_customer set status = 'active'  where c_id = :1";
              s->setSQL(sQlstmt);
              s->setInt(1,no);
              s->executeUpdate();
              conn->commit();
              conn->terminateStatement(s);
}

void test::update_plan(int no)
{
test t;
int plan,handset,rent;
system("clear");
//cout<<"Select Plan\n1).Basic plan\n 2).Gold plan"<<endl;
cout<<"\n\n\n\n\t\t\t\t\t*--------------------------\033[1;32mSELECT PLAN\033[0m---------------------------*\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t    Press '1' for Basic plan\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t    Press '2' for Gold plan\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t*----------------------------------------------------------------*";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>plan;
if(plan==1)
{
plan=1;
s=conn->createStatement();
 sQlstmt = "update t3_ph set pid=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,plan);
  s->setInt(2,no);
   s->executeUpdate();
//cout<<"Basic plan selected"<<endl;
cout<<"\n\n\n\t\t\t\t\t\t\t\tBASIC PLAN SELECTED";  
  cout << "\n\n\t\t\t\t\t\tPlan Details updated for Customer Id  :  "<<no<<endl;
//cout << "Plan details updated for Customer Id : "<<no<<endl;
t.delay_time(4000);
 conn->commit();
  conn->terminateStatement(s);


//cout<<"Choose Handset \n1).Buyout \n2).Rental"<<endl;
system("clear");
cout<<"\n\n\n\t\t\t\t\t*-------------------------\033[1;32mCHOOSE HANDSET\033[0m-------------------------*\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t\tPress '1' for Buyout\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t\tPress '2' for Rental\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t*----------------------------------------------------------------*";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>handset;
if(handset)
{
handset=1;
rent=0;
s=conn->createStatement();
 sQlstmt = "update t3_ph set hid=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,handset);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tHandset Details updated for Customer Id  :  "<<no<<endl;
 // cout << "Handset details updated for Customer Id : "<<no<<endl;

  conn->commit();
  conn->terminateStatement(s);
s=conn->createStatement();
 sQlstmt = "update t3_ph set rent=:1 where cid=:2";
  s->setSQL(sQlstmt);
 s->setInt(1,rent);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tRent details updated for Customer Id :  "<<no<<endl;
 // cout << "Rent details updated for Customer Id : "<<no<<endl;
t.delay_time(3000);
  conn->commit();
  conn->terminateStatement(s);

}
else
{
handset=2;
rent=20;
s=conn->createStatement();
 sQlstmt = "update t3_ph set hid=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,handset);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tHandset Details updated for Customer Id  :  "<<no<<endl;
 // cout << "Handset details updated for Customer Id : "<<no<<endl;
  conn->commit();
  conn->terminateStatement(s);
s=conn->createStatement();
 sQlstmt = "update t3_ph set rent=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,rent);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tRent details updated for Customer Id :  "<<no<<endl;
 // cout << "Rent details updated for Customer Id : "<<no<<endl;
t.delay_time(3000);
  conn->commit();
  conn->terminateStatement(s);

}
}
else
{
plan=2;
s=conn->createStatement();
 sQlstmt = "update t3_ph set pid=:1 where cid=:2";
  s->setSQL(sQlstmt);
 s->setInt(1,plan);
  s->setInt(2,no);
   s->executeUpdate();
cout<<"\n\n\n\t\t\t\t\t\t\t\tGOLD PLAN SELECTED"<<endl;
  cout << "\n\n\t\t\t\t\t\tPlan details updated for Customer Id : "<<no<<endl;
  conn->commit();
  conn->terminateStatement(s);

cout<<"\n\n\n\t\t\t\t\t*-------------------------\033[1;32mCHOOSE HANDSET\033[0m-------------------------*\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t\tPress '1' for Buyout\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t|\t\t\tPress '2' for Rental\t\t\t |\n\t\t\t\t\t|\t\t\t\t\t\t\t\t |\n\t\t\t\t\t*----------------------------------------------------------------*";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice : ";
cin>>handset;
if(handset==1)
{
handset=1;
rent=0;
s=conn->createStatement();
 sQlstmt = "update t3_ph set hid=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,handset);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tHandset details updated for Customer Id : "<<no<<endl;
  conn->commit();
  conn->terminateStatement(s);
s=conn->createStatement();
 sQlstmt = "update t3_ph set rent=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,rent);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tRent details updated for Customer Id : "<<no<<endl;
t.delay_time(3000);
 conn->commit();
  conn->terminateStatement(s);
}
else
{
handset=2;
rent=20;
s=conn->createStatement();
sQlstmt = "update t3_ph set hid=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,handset);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tHandset details updated for Customer Id : "<<no<<endl;
  conn->commit();
  conn->terminateStatement(s);
s=conn->createStatement();
 sQlstmt = "update t3_ph set rent=:1 where cid=:2";
  s->setSQL(sQlstmt);
  s->setInt(1,rent);
  s->setInt(2,no);
   s->executeUpdate();
  cout << "\n\n\t\t\t\t\t\tRent details updated for Customer Id : "<<no<<endl;
t.delay_time(3000);
 conn->commit();
  conn->terminateStatement(s);

}

}
}

void test::view_cusrequest()
{
int s2;
 string s1,s3,s4,s5;
        system("clear");
        Statement *s = conn->createStatement();
        sQlstmt="SELECT * FROM t3_chgRequest where status='PENDING' ORDER BY crid asc";
                s->setSQL(sQlstmt);
                r = s->executeQuery();
 cout<<"\n\n\t\t\033[1;33mRequest Id"<<setw(20)<<"Customer Id"<<setw(26)<<"Change Field"<<setw(23)<<"New Value"<<setw(24)<<"Status\033[0m"<<endl;
                cout<<"\t\033[1;34m--------------------------------------------------------------------------------------------------------------------------------\033[0m"<<endl;               
 while(r->next())
                {
                s1= r->getString(1);
                s2=r->getInt(2);
                s3 = r->getString(3);
                s4= r->getString(4);
                s5= r->getString(5);
 cout<<"\n\t\t"<<setw(10)<<s1<<setw(20)<<s2<<setw(26)<<s3<<setw(23)<<s4<<setw(24)<<s5<<"\n";               
                }
       s->closeResultSet(r);
        conn->terminateStatement(s);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");

}
void test::update_reqstatus(int no)
{
        test t;
 Statement *s=conn->createStatement();
        sQlstmt = "update t3_chgRequest set status='updated'  where crid = :1";
              s->setSQL(sQlstmt);
              s->setInt(1,no);
              s->executeUpdate();
               // cout<<"Status Updated";
               // t.delay_time(3000);
              conn->commit();
              conn->terminateStatement(s);

}
void test::chg_password(int no)
{
test t;
string cus_pwd;
cout<<"\n\n\t\t\t\t\t\tEnter New Password : ";
t.echo(false);
cin>>cus_pwd;
t.echo(true);
 Statement *s=conn->createStatement();
        sQlstmt = "update t3_customer set c_pwd=:1  where c_id = :2";
         s->setSQL(sQlstmt);
             s->setInt(2,no);
             s->setString(1,cus_pwd);
	     s->executeUpdate();
         conn->commit();
conn->terminateStatement(s);
         cout<<"\n\n\n\t\t\t\t\t\t\t\tPassword Changed";
 cout<<"\n\n\n\t\t\t\t\tPress any key to Continue.....";
cin.get();
   

}
        
