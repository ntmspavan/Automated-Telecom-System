#include<iostream>
#include<cstdlib>
#include<iomanip>
#include"t3_adm.h"
using namespace std;
void test::admin_auth()
{
		test t;
		int u,count=0;	
                string pd,mpd;
                 cout<<"\n\n\n\n\t\t\t\t\t\t\t----------CUSTOMER REPRESENTATIVE LOGIN-------------"<<endl;
		 cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m ** PASSWORD WILL NOT BE VISIBLE TO THE USER** \033[0m  ";
		cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter your id : ";
                //cin.ignore();
		//cin.getline(u,20);
                cin.clear();
		cin>>u;
		cin.ignore();
		cin.clear();	
                  cout<<"\n\t\t\t\t\t\t\t\tEnter your password : ";
		t.echo(false);
		cin>>pd;
			t.echo(true);
		             	mpd=authadb(u);
                if(mpd.compare(pd)==0)
   		{
		int y=5,i=31;
			for(y=5;y>=0;y--)
			{
			 system("clear");
                        cout<<"\n\n\n\n\t\t\t\t\t\t\033[1;32m------------WELCOME CUSTOMER REPRESENTATIVE-------------\033[0m"<<endl;
			 cout<<"\n\n\n\n\t\t\t\t\t\t\t";
			//cout<<"Preparing your Dashboard in ..\033[1;"<<i<<"m"<<count<<"\033[0m seconds"<<endl;
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
			cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
			cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( \033[1;"<<i<<"m"<<y<<"\033[0m )   ,-. `.\n";
			cout<<"\t\t\t\t\t\t\t\t               ,'  ( \033[1;"<<i<<"m"<<y<<"\033[0m )  `-'   ( \033[1;"<<i<<"m"<<y<<"\033[0m )  `.\n";
			cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
			cout<<"\t\t\t\t\t\t\t\t             / ( \033[1;"<<i<<"m"<<y<<"\033[0m ) ,'          `. ( \033[1;"<<i<<"m"<<y<<"\033[0m ) ', \n";
			cout<<"\t\t\t\t\t\t\t\t            :   `-' /             '. `-'  :\n";
			cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
			cout<<"\t\t\t\t\tpreparing your dashboard  in        |( \033[1;"<<i<<"m"<<y<<"\033[0m ) |   |___\033[1;"<<i<<"m"<<y<<"\033[0m_____|  | ( \033[1;"<<i<<"m"<<y<<"\033[0m )|\n";
			cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
			cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
			cout<<"\t\t\t\t\t\t\t\t            '. ( \033[1;"<<i<<"m"<<y<<"\033[0m ) `.          ,'(`.    /\n";
			cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
			cout<<"\t\t\t\t\t\t\t\t               `.  ( \033[1;"<<i<<"m"<<y<<"\033[0m )   ,-.       (  ,'\n";
			cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( \033[1;"<<i<<"m"<<y<<"\033[0m )      ,'`\n";
			cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
			cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
			i++;
			t.delay_time(1000);


     			 }
			system("clear");
		
		 t.admin_view();
		}
                else
                {
		system("clear");
			cout<<"\n\n\n\n\t\t\t\t\t\t\t\tPassword is incorrect ...Please Enter your correct password...\n";
		t.admin_auth();	
         	t.delay_time(4000);
			}

			
	}
	      
void test::user_auth()
{
		 test t;
                int u,g,count=0,c;
                string pd,mpd,yes;
		pass:
		 cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------USER LOGIN------------"<<endl;
                 cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m ** PASSWORD WILL NOT BE VISIBLE TO THE USER** \033[0m  "; 
                cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter your id : ";
                cin>>u;
		g=cus_id_val(u);
		if(g==0)
		{		
			cout<<"\n\n\t\t\t\t\tThere is no Id matching with this...Enter correct Id.....";
              		goto pass;
		 }
		 else
		{

		cout<<"\n\t\t\t\t\t\t\t\tEnter your password : ";

                t.echo(false);
                cin>>pd;
                      t.echo(true);
               mpd=authcdb(u);
                if(mpd.compare(pd)==0)
                {
		 int y=3,i=31;
                        for(y=3;y>=0;y--)
                        {
                         system("clear");
                        cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------WELCOME "<<printname(u)<<"-------------\033[0m"<<endl;
                         cout<<"\n\n\n\n\t\t\t\t\t\t\t";
			//cout<<"Preparing your Dashboard in ..\033[1;"<<i<<"m"<<count<<"\033[0m seconds"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
                        cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
                        cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( \033[1;"<<i<<"m"<<y<<"\033[0m )   ,-. `.\n";
                        cout<<"\t\t\t\t\t\t\t\t               ,'  ( \033[1;"<<i<<"m"<<y<<"\033[0m )  `-'   ( \033[1;"<<i<<"m"<<y<<"\033[0m )  `.\n";
                        cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
                        cout<<"\t\t\t\t\t\t\t\t             / ( \033[1;"<<i<<"m"<<y<<"\033[0m ) ,'          `. ( \033[1;"<<i<<"m"<<y<<"\033[0m ) ', \n";
                        cout<<"\t\t\t\t\t\t\t\t            :   `-' /             '. `-'  :\n";
                        cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
                        cout<<"\t\t\t\t\tpreparing your dashboard  in        |( \033[1;"<<i<<"m"<<y<<"\033[0m ) |   |___\033[1;"<<i<<"m"<<y<<"\033[0m_____|  | ( \033[1;"<<i<<"m"<<y<<"\033[0m )|\n";
                        cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
                        cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
                        cout<<"\t\t\t\t\t\t\t\t            '. ( \033[1;"<<i<<"m"<<y<<"\033[0m ) `.          ,'(`.    /\n";
                        cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
                        cout<<"\t\t\t\t\t\t\t\t               `.  ( \033[1;"<<i<<"m"<<y<<"\033[0m )   ,-.       (  ,'\n";
                        cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( \033[1;"<<i<<"m"<<y<<"\033[0m )      ,'`\n";
                        cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
                        cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
                        i++;
                       
			last_login(u);      
			t.delay_time(1000);  		
			
                         }

                       insert_login(u);
		        system("clear");
			c=sel_count(u);
			if(c==0)
			{
			// call change password function here
			check_password(u);
			//c++;
			update_count(u);
			t.user_view(u);
				}
			else
                         t.user_view(u);
                }
		else
                {
                        count++;
                        if(count<3)
                        {
			system("clear");
                        cout<<"\n\n\n\n\t\t\t\t\t\t\t\tPassword is incorrect ...Please Enter your correct password...\n";
                        cout<<"\n\n\n\n\t\t\t\t\t\t\t\tAttempts Left " <<3-count;
			goto pass;
                        }
                        else
                                {               cout<<"\n\n\n\t\t\t\t\tYou have entered password wrongly for 3 times\n\n\n";
                        	      t.delay_time(2000);
					cout<<"\n\n\n\t\t\tUse Forgot Password Option ,Click (Y/y) to continue or Click any key to exit....";	
				       cin>>yes;

					if((yes.compare("Y")==0)||(yes.compare("y")==0))
					{
					t.forgot_pwd(u);
				       t.delay_time(2000);
					}
					else
					exit(1);
                        }
 }
}
}
void test::check_password(int no)
{
                 test t;

                string pd,mpd;
                cout<<"\n\n\n\n\t\t\t\t\t\tEnter your Old password : ";
                t.echo(false);
		cin>>pd;
		t.echo(true);
               mpd=authcdb(no);
                if(mpd.compare(pd)==0)
                {
                         t.chg_password(no);
               	delay_time(3000);
		 }
                else
                {
                        cout<<"\n\n\n\t\t\t\t\t\tOld  password incorrect...Please Enter your correct password...\n";
                        t.check_password(no);
			t.delay_time(3000);
                }

 }
int test::add_cus_val(string n)
{

int i=0,len;
len=n.length();
if(len<15)
{
while(n[i]!='\0')
{
if(!isalpha(n[i]))
{
cout<<"\n\n\n\t\t\t\t\tInvalid Name .. Please Enter The Valid Name ...\n\n ";
return 1;
}
else
i++;
}
}
else
{
cout<<"\n\n\n\t\t\t\tInvalid Name .. Please Enter The Valid Name ...length invalid\n\n";
return 1;
}
}
bool test::isleapyear(unsigned short year){
        return (!(year%4) && (year%100) || !(year%400));
}
string test::date_val()
{
string a;
unsigned short monthlen[]={31,28,31,30,31,30,31,31,30,31,30,31};
unsigned short month[]={31,29,31,30,31,30,31,31,30,31,30,31};
dob:
cout<<"\n\t\t\t\t\t\t\tEnter Date Of Birth(DD/MM/YYYY)  : ";
cin>>a;//dob

int b,c,d;
string s1=a.substr (0,2);
stringstream dd(s1);
dd >> b;
string s2=a.substr (3,2);
stringstream mm(s2);
mm>> c;

string s3=a.substr (6,4);
stringstream yy(s3);
yy >> d;

bool b1=isleapyear(d);
time_t now = time(0);
   tm *ltm = localtime(&now);
int year=1900 + ltm->tm_year;
int mon=1 + ltm->tm_mon;
int date=ltm->tm_mday;
if(d==year && c>=mon && b>=date)
{
cout<<"Incorrect date"<<endl;
goto dob;
}
else if((isleapyear(d)) && d<=year)
{
        if(b>0 && b<=month[c-1])
        {
        if(c>0 && c<=12)
        cout<<"";
        else
	   {
        cout<<"incorrect month\n";
	goto dob;
	   }
        }
        else 
	   {
        cout<<"incorrect date\n";
	goto dob;
           }
}
else if(d<=year)
{
       // cout<<"Inside ";
         if(b>0 && b<=monthlen[c-1])
        {
         if(c>0 && c<=12)
        cout<<"";
        else{
        cout<<"incorrect month\n";
        goto dob;       }
	}
        else{
        cout<<"Incorrect date\n";
	goto dob;       }
}
else{
cout<<"incorrect year\n";
goto dob;       
}
return a;
}
int test::delay_time(unsigned long milisec)
{
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while(nanosleep(&req,&req)==-1)
        continue;
    return 1;
}
int test::email_val(string email)
{

string s=email;
int k=0,t=0,l=0;

for(int i=0;i<s.length();i++)
{
        if(s[i]=='@')

        k++;


        if(k==1)
        {
           if(isalpha(s[i]))
                l++;

           if(l>2)
           {
                if(s[i]=='.')
                {
                        if((s[i+1]=='c')||(s[i+1]=='i'))
                        t=t+1;
                        if((s[i+2]=='o')||(s[i+2]=='n'))
                        t=t+1;
                        if(s[i+3]=='m')
                        t=t+1;

                        if(t==3||t==2)

                        return 1; 

                }
            }
        }
 }
if((k==1&&t<2)||(k<1)||(k>1))
return 0;
}

void test::update_cfname()
{
test t;
	system("clear");
try{
        int cid,s1;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------UPDATING CUSTOMER DETAILS------------\033[0m";  
    cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
  cid=cus_id_int();
	s1=cus_id_val(cid); 
   if(s1==0)
throw "\n\n\t\t\t\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
    update_fname(cid);
        cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<cid;
	delay_time(3000);
	cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
	char userContinue;
	cin >> userContinue;
	system("clear");
}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}

void test::update_clname()
{        
test t;
	system("clear");
       try{

       int cid1,s1;       
	 cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------UPDATING CUSTOMER DETAILS------------\033[0m";
     
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cid1=cus_id_int();
       // cin>>cid1;
s1=cus_id_val(cid1);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{
        update_lname(cid1);
        cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<cid1;
        delay_time(3000);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");
}
}

catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}

}
void test::update_caddress()
{
        system("clear");
try{

       int cid2,s1;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------UPDATING CUSTOMER DETAILS------------\033[0m";
 cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cid2=cus_id_int();      
 // cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
        //cin>>cid2;
s1=cus_id_val(cid2);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{

        update_address(cid2);
 	cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<cid2;
        delay_time(3000);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");

}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}

}

void test::update_ccity()
{
        system("clear");
   try
{     int cid3,s1;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------UPDATING CUSTOMER DETAILS------------\033[0m";
 cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cid3=cus_id_int();      
 // cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
       // cin>>cid3;
s1=cus_id_val(cid3);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{

        update_city(cid3);
        cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<cid3;
        delay_time(3000);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");
}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}

}

void test::update_cplan()
{
        system("clear");
try
{
        int cid3,s1;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------UPDATING CUSTOMER DETAILS------------\033[0m";
 cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
cid3=cus_id_int();      
 // cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Customer Id : ";
       // cin>>cid3;
s1=cus_id_val(cid3);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{

        update_plan(cid3);
	cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<cid3;
        delay_time(3000);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");
}
}
catch(const char* msg)
{
system("clear");
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}

}
void test::update_creqstatus()
{
try
{
       int rid,s1;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the Request Id : ";
rid=cus_id_int();      
 // cin>>rid;
s1=cus_rid_val(rid);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Request Id....";
 else
{

        update_reqstatus(rid);
	cout<<"\n\n\n\t\t\t\t\t\t\t\tRecord Updated for  "<<rid;
        delay_time(3000);
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
void test::disconnect_ccustomer()
{
        system("clear");
 
try{
       int cid,s1;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------CHANGE CONNECTION STATUS------------\033[0m";
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the customer Id to deactivate the connection : ";
cid=cus_id_int();      
  //cin>>cid;
s1=cus_id_val1(cid);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{

        disconnect_customer(cid);
	delay_time(3000);
        cout<<"\n\n\n\t\t\t\t\t\t\t\tConnection  succesfully  deactivated for customer Id : "<<cid;
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;	
        system("clear");
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}

void test::connect_ccustomer()
{
        system("clear");
try
{
        int cid,s1;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\033[1;32m------------CHANGE CONNECTION STATUS------------\033[0m";
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the customer Id to activate the connection : ";
cid=cus_id_int();      
 // cin>>cid;
s1=cus_id_val1(cid);
if(s1==0)
throw "\n\n\t\t\t\tNo Record Matches With This Customer Id....";
 else
{

        connect_customer(cid);
        delay_time(3000);
        cout<<"\n\n\n\t\t\t\t\t\t\t\tConnection succesfully activated for customer Id : "<<cid;
        cout << "\n\n\n\t\t\t\t\t\tPress any key to continue...";
        char userContinue;
        cin >> userContinue;
        system("clear");
}
}
catch(const char* msg)
{
cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;31m----------ERROR MESSAGE---------\033[0m\n"<<msg;
}
}
int test::cus_id_int()
{
string n;
int a,b;
do
{
int i=0;
//cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter the  Id : ";
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
cout<<"\n\n\t\t\t\t\t\t\t\tYou have entered the Invalid ID\n\n\t\t\t\t\t\t\t\tEnter the Valid Id : ";
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

