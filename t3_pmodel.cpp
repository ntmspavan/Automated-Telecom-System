#include<iostream>
#include<cstdlib>
#include<iomanip>
#include"t3_adm.h"
void plan::p_plan()
{
test t;
system("clear");

string v2;
int v1,v3,v4,v5,v6,v7,v8;
int a,b;

Statement *s=conn->createStatement();
sQlstmt="SELECT * FROM t3_plandetails";
s->setSQL(sQlstmt);
r = s->executeQuery();
cout<<"\n\n\n\t\t\t\t\t\t\t**Charges : paise/minute**";
cout<<"\n\n\n\033[1;33m  Tarrif ID"<<setw(18)<<"Type of plan"<<setw(16)<<"Local Mobile"<<setw(20)<<"Local LandLine"<<setw(20)<<"National Mobile"<<setw(21)<<"National LandLine"<<setw(23)<<"International Mobile"<<setw(29)<<"International LandLine\033[0m"<<endl;
//cout<<"  "<<setw(42)<<"paise/min"<<setw(18)<<"paise/min"<<setw(21)<<"paise/min"<<setw(20)<<"paise/min"<<setw(24)<<"paise/min"<<setw(24)<<"paise/min";
cout<<"\n  \033[1;34m---------------------------------------------------------------------------------------------------------------------------------------------------------\033[0m";
while(r->next())
{
v1 = r->getInt(1);
v2 = r->getString(2);
v3= r->getInt(3);
v4= r->getInt(4);
v5= r->getInt(5);
v6= r->getInt(6);
v7=r->getInt(7);
v8=r->getInt(8);
cout<<"\n\n"<<setw(3)<<v1<<setw(22)<<v2<<setw(13)<<v3<<setw(18)<<v4<<setw(21)<<v5<<setw(20)<<v6<<setw(21)<<v7<<setw(21)<<v8<<endl;
t.delay_time(2000);
}
s->closeResultSet(r);
 conn->terminateStatement(s);
}



void plan::view_plan(int u)
{
string p3,p4;
int cid,p1,p2;
system("clear");
Statement *s = conn->createStatement();
sQlstmt="select cid,rent,htype,plan_ty from t3_ph,t3_plan,t3_hdset where t3_ph.pid=t3_plan.pid and t3_ph.hid=t3_hdset.hid and cid=:1";
s->setSQL(sQlstmt);
s->setInt(1,u);
ResultSet *r= s->executeQuery();
r->next();
p1 = r->getInt(1);
p2 = r->getInt(2);
p3 = r->getString(3);
p4= r->getString(4);

cout<<"\n\n\n\n\n\n\n\t\t\t\t\033[1;32m----------PLAN AND HANDSET DETAILS OF THE CUSTOMER---------\033[0m\n";
cout<<"\n\n\t\t\t\t\t\tCustomer ID : "<<p1<<endl;
cout<<"\n\n\t\t\t\t\t\tType of plan : "<<p4<<endl;
cout<<"\n\n\t\t\t\t\t\tType of handset : "<<p3<<endl;
cout<<"\n\n\t\t\t\t\t\tRent : "<<p2<<endl;
delay_time(3000);
cout << "\n\n\n\t\t\t\tPress any key to continue......";
char userContinue;
cin >> userContinue;
s->closeResultSet(r);
conn->terminateStatement(s);
}


void plan::chg_tobasic(int u)
{
int cid;
system("clear");


                s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'PLAN','Basic','PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->executeUpdate();
            
                conn->commit();
                conn->terminateStatement(s);

}
void plan::chg_togold(int u)
{
int cid;
system("clear");


                s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'PLAN','Gold','PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->executeUpdate();
             
                conn->commit();
                conn->terminateStatement(s);

}
void plan::chg_tobuyout(int u)
{
int cid;
system("clear");


                s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'PLAN','Gold','PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->executeUpdate();
                
                conn->commit();
                conn->terminateStatement(s);


}
void plan::chg_torental(int u)
{
int cid;
system("clear");


                s=conn->createStatement();
                sQlstmt = "insert into t3_chgRequest(cid,chg_field,new_value,status) values(:1,'PLAN','Gold','PENDING')";
                s->setSQL(sQlstmt);
                s->setInt(1,u);
                s->executeUpdate();
               
                conn->commit();
                conn->terminateStatement(s);

}


