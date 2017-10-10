#include<iostream>
#include<cstdlib>
#include <string.h>
#include"t3_adm.h"

using namespace std;

void billgeneration::generate_bill(int customerId)
{
int   local_landline,local_mobile,national_landline,national_mobile,international_landline,international_mobile,bill_amount,fine,rent;
int local_lcharge,local_mcharge,national_lcharge,national_mcharge,international_lcharge,international_mcharge;
string  cus_name,cus_lname,city,cus_addr,status,billdate;
{
s = conn->createStatement();

sQlstmt = "select c_fname,c_lname,c_addr,city,status  from t3_customer where c_id=:1";
s->setSQL(sQlstmt);
s->setInt(1,customerId);
r = s->executeQuery();
r->next();


cus_name= r->getString(1);

cus_lname= r->getString(2);
cus_addr = r->getString(3);
city= r->getString(4);
status = r->getString(5);
s->closeResultSet(r);
conn->terminateStatement(s);

}

{
Statement *stmt2;
 ResultSet *rs2;
 string sqlstmt2;
stmt2 = conn->createStatement();
sqlstmt2 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='L' AND modem='LL'";
stmt2->setSQL(sqlstmt2);

stmt2->setInt(1,customerId);
rs2 = stmt2->executeQuery();
rs2->next();

local_landline = rs2->getInt(1);

stmt2->closeResultSet(rs2);
conn->terminateStatement(stmt2);
}


{
Statement *stmt3;
 ResultSet *rs3;
 string sqlstmt3;
stmt3 = conn->createStatement();
sqlstmt3 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='L' AND modem='M'";
stmt3->setSQL(sqlstmt3);
stmt3->setInt(1,customerId);
rs3 = stmt3->executeQuery();
rs3->next();
local_mobile= rs3->getInt(1);

stmt3->closeResultSet(rs3);
conn->terminateStatement(stmt3);
}


{
Statement *stmt4;
 ResultSet *rs4;
 string sqlstmt4;
stmt4 = conn->createStatement();
sqlstmt4 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='N' AND modem='LL'";
stmt4->setSQL(sqlstmt4);
stmt4->setInt(1,customerId);
rs4 = stmt4->executeQuery();
rs4->next();

national_landline = rs4->getInt(1);

stmt4->closeResultSet(rs4);
conn->terminateStatement(stmt4);
}


{
Statement *stmt5;
 ResultSet *rs5;
 string sqlstmt5;
stmt5 = conn->createStatement();
sqlstmt5 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='N' AND modem='M'";
stmt5->setSQL(sqlstmt5);
stmt5->setInt(1,customerId);
rs5 = stmt5->executeQuery();
rs5->next();

national_mobile= rs5->getInt(1);
stmt5->closeResultSet(rs5);
conn->terminateStatement(stmt5);
}


{
Statement *stmt6;
 ResultSet *rs6;
 string sqlstmt6;
stmt6 = conn->createStatement();
sqlstmt6 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='I' AND modem='LL'";
stmt6->setSQL(sqlstmt6);
stmt6->setInt(1,customerId);
rs6 = stmt6->executeQuery();
rs6->next();

international_landline= rs6->getInt(1);

stmt6->closeResultSet(rs6);
conn->terminateStatement(stmt6);
}


{
Statement *stmt7;
 ResultSet *rs7;
 string sqlstmt7;
stmt7 = conn->createStatement();
sqlstmt7 = "select sum(duration)  from t3_calldetails  where cid=:1 AND toc='I' AND modem='M'";
stmt7->setSQL(sqlstmt7);
stmt7->setInt(1,customerId);
rs7 = stmt7->executeQuery();
rs7->next();

international_mobile= rs7->getInt(1);

stmt7->closeResultSet(rs7);
conn->terminateStatement(stmt7);
}

{
Statement *stmt8;
 ResultSet *rs8;
 string sqlstmt8;
stmt8 = conn->createStatement();
sqlstmt8 = "select  b.local_landline,b.local_mobile,b.national_landline,b.national_mobile,b.international_landline,b.international_mobile,a.rent from T3_PLANDETAILS b FULL OUTER JOIN T3_PH a on  a.pid=b.tid where a.cid=:1";
stmt8->setSQL(sqlstmt8);
stmt8->setInt(1,customerId);
rs8 = stmt8->executeQuery();
rs8->next();
local_lcharge= rs8->getInt(1);
local_mcharge= rs8->getInt(2);
national_lcharge= rs8->getInt(3);
national_mcharge= rs8->getInt(4);
international_lcharge= rs8->getInt(5);
international_mcharge= rs8->getInt(6);
rent=rs8->getInt(7);


stmt8->closeResultSet(rs8);
conn->terminateStatement(stmt8);
}


bill_amount=(local_landline*local_lcharge)+(local_mobile*local_mcharge)+(national_landline*national_lcharge)+(national_mobile*national_mcharge)+(international_landline*international_lcharge)+(international_mobile*international_mcharge);

{
status="not paid";
}

{

Statement *stmt9;
 ResultSet *rs9;
string sqlstmt9;
stmt9 = conn->createStatement();

sqlstmt9 = "select TO_CHAR((sysdate-1), 'yyyy/mm/dd')  from dual";

stmt9->setSQL(sqlstmt9);
rs9 = stmt9->executeQuery();
rs9 ->next();
billdate= rs9->getString(1);
stmt9->closeResultSet(rs9);
conn->terminateStatement(stmt9);
}

string sqlstmt;
Statement *stmt;
 ResultSet *rs;
fine=0;

stmt = conn->createStatement();

 sqlstmt = "insert into bill_generation (c_id,c_fname,c_lname,c_addr,city,status,local_landline,local_mobile,national_landline,national_mobile,international_landline,international_mobile,bill_amount,rent,fine,billdate ) values(:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16)";
stmt->setSQL(sqlstmt);


stmt->setInt(1,customerId);
stmt->setString(2,cus_name);
stmt->setString(3,cus_lname);
stmt->setString(4,cus_addr);
stmt->setString(5,city);
stmt->setString(6,status);
stmt->setInt(7,local_landline);
stmt->setInt(8,local_mobile);
stmt->setInt(9,national_landline);
stmt->setInt(10,national_mobile);
stmt->setInt(11,international_landline);
stmt->setInt(12,international_mobile);
stmt->setInt(13,bill_amount);
stmt->setInt(14,rent);
stmt->setInt(15,fine);
stmt->setString(16,billdate);
stmt->executeUpdate();

cout <<"\n\n\n\t\t\t\t\t\t\t\t\tBill Generated\n";
  conn->commit();
 conn->terminateStatement(stmt);
cout << "\n\n\n\t\t\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
system("clear");

}
void billgeneration::view_bill(int cid)
{
test t;
int days,fine,billamount1,billamount;
int local_landline1,local_mobile1,national_landline1,national_mobile1,international_landline1,international_mobile1,bill_amount1,fine1,rent1;
string billdate1;
Statement *stmt9;
ResultSet *rs9; 
string sqlstmt9;
stmt9 = conn->createStatement();
sqlstmt9 = "select (sysdate-TO_DATE(billdate,'yyyy/mm/dd')),bill_amount  from bill_generation where c_id=:1";
stmt9->setSQL(sqlstmt9);
stmt9->setInt(1,cid);
rs9 = stmt9->executeQuery();
rs9 ->next();
days= rs9->getInt(1);
billamount= rs9->getInt(2);
stmt9->closeResultSet(rs9);
conn->terminateStatement(stmt9);

//cout<<days<<"\n";

if(days>0)
{
days=days-14;
fine=14*days;
Statement *stmt;
string sqlstmt;
stmt = conn->createStatement();
sqlstmt = "update bill_generation set fine=:2 where c_id=:1";
 stmt->setSQL(sqlstmt);
  stmt->setInt(1,cid);
 stmt->setInt(2,fine);
 stmt->executeUpdate();
conn->commit();
conn->terminateStatement(stmt);
//cout<<fine<<"\n";
}

int billid,rent,bill_amount ;
string city1,status1;
s = conn->createStatement();
sQlstmt = "select * from bill_generation where c_id=:1";
s->setSQL(sQlstmt);
s->setInt(1,cid);;
r = s->executeQuery();

r->next();

billid=r->getInt(1);
cid = r->getInt(2);
//cus_fname = r->getString(3);
//cus_lname = r->getString(4);
cus_addr = r->getString(5);
city1 = r->getString(6);
status1= r->getString(7);
//cout<<"\nstatus"<<status1;
local_landline1= r->getInt(8);
local_mobile1= r->getInt(9);
national_landline1= r->getInt(10);
national_mobile1= r->getInt(11);
international_landline1= r->getInt(12);
international_mobile1= r->getInt(13);
billamount1=r->getInt(14);
rent1=r->getInt(15);
fine1=r->getInt(16);
billdate1=r->getString(17);
//cout<<"before fine";
s->closeResultSet(r);
conn->terminateStatement(s);

s = conn->createStatement();
sQlstmt = "select * from t3_customer where c_id=:1";
s->setSQL(sQlstmt);
s->setInt(1,cid);;
r = s->executeQuery();

r->next();
cus_fname = r->getString(2);
cus_lname = r->getString(3);
fine=0;
 int count=5,i=31;
                        for(count=5;count>0;count--)
                        {
                         system("clear");
                               cout<<"\n\n\n\n\t\t\t\t\t\t\t";
                        cout<<"\n\n\n\t\t\t\tPreparing your Bill for customer id "<<cid<<"  in \033[1;"<<i<<"m"<<count<<"\033[0m  seconds";
                      	i++;
			t.delay_time(1000);
				}
float b=(float)billamount1/100;
system("clear");
cout<<"\n\t\t\t\033[1;33m=====================================================================================\033[0m"<<endl;
cout<<"\n\t\t\t-------------------\033[1;32mBill details of the customer "<<cid<<"\033[0m---------------------------"<<endl;
cout<<"\n\t\t\t\033[1;33m=====================================================================================\033[0m"<<endl;
cout<<"\n\t\t\tBill Id                               : "<<billid<<endl;
cout<<"\n\t\t\tCustomer  Name                        : "<<cus_fname<<"\t"<<cus_lname<<endl;
cout<<"\n\t\t\tCustomer Address                      : "<<cus_addr<<endl;
cout<<"\n\t\t\tCustomer city                         : "<<city1<<endl;
cout<<"\n\t\t\tCustomer Status                       : "<<status1<<endl;
cout<<"\n\t\t\t\033[1;33m=====================================================================================\033[0m"<<endl;
delay_time(2000);
cout<<"\n\t\t\tCustomer Local Landline cost          : "<<local_landline1<<endl;
cout<<"\n\t\t\tCustomer Local Mobile cost            : "<<local_mobile1<<endl;
cout<<"\n\t\t\tCustomer National Landline cost       : "<<national_landline1<<endl;
cout<<"\n\t\t\tCustomer National Mobile cost         : "<<national_mobile1<<endl;
cout<<"\n\t\t\tCustomer InterNational Landline cost  : "<<international_landline1<<endl;
cout<<"\n\t\t\tCustomer InterNational Mobile cost    : "<<international_mobile1<<endl;
cout<<"\n\t\t\tBill Amount                           : "<<b<<endl;
cout<<"\n\t\t\tRent                                  : "<<rent1<<endl;
cout<<"\n\t\t\tFine                                  : "<<fine1<<endl;
cout<<"      \t\t           \033[1;33m                                 _______________\033[0m"<<endl;
delay_time(2000);
cout<<"\n\t\t\tTotal Bill amount(Rs)                   "<<b+rent1+fine1<<endl;
cout<<"      \t\t                                            \033[1;33m_______________\033[0m"<<endl;
cout << "\n\n\n\t\t\t\t\tPress any key to continue...";
char userContinue;
cin >> userContinue;
s->closeResultSet(r);
conn->terminateStatement(s);
system("clear");
}

