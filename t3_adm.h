#include<iostream>
#include<occi.h>
#include <string>
#include <ctime>
#include <iomanip> 
#include <termios.h>
#include <unistd.h>
#include <sstream>
using namespace oracle::occi;
using namespace std;
static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
class test
{
public:
 Environment *env;
 Connection *conn;
 Statement *s;
 ResultSet *r,*r1;

string cus_addr,cus_city;
string cus_fname,cus_lname,cus_uname,cus_pwd;
string  sQlstmt;
string city,status,billdate;
int local_landline,local_mobile,national_mobile,national_landline,international_mobile,international_landline;
test()
 {

 env = Environment::createEnvironment();
 conn=env->createConnection("e839879","comp587","ILPChnUnix");
 }
void echo( bool on = true )
  {

  struct termios settings;
  tcgetattr( STDIN_FILENO, &settings );
  settings.c_lflag = on
                   ? (settings.c_lflag |   ECHO )
                   : (settings.c_lflag & ~(ECHO));
  tcsetattr( STDIN_FILENO, TCSANOW, &settings );
  }

void admin_auth();
string authadb(int);
string authcdb(int);

string printname(int);

int cus_id_val(int);
int cus_id_int();
int cus_id_val1(int);

int cus_rid_val(int);
int email_val(string);
string date_val();
bool isleapyear(unsigned short); 

void admin_reauth();
void admin_view();
int add_cus_val(string); 


void user_auth();
void del_pwd(int);
void forgot_pwd(int);
int sel_count(int);
void update_count(int);
void last_login(int);
void insert_login(int);

void user_view(int);

void add_customer();
void add_plandetails();
void update_fname(int);
void update_lname(int);
void update_address(int);
void update_city(int);
void update_cfname();
void update_clname();
void update_caddress();
void update_ccity();
void update_plan(int);
void update_cplan();
void update_reqstatus(int);
void update_creqstatus();

void view_cusrequest();

void disconnect_customer(int);
void disconnect_ccustomer();
void connect_customer(int);
void connect_ccustomer();


// USER LOGIN

void view_customer(int);

void chg_firstname(int);
void chg_lastname(int);
void chg_address(int);


void view_cstatus(int);

void view_status(int);

void check_password(int);
void chg_password(int);
//PLAN DETAILS
void main_plan();
//void plan();
int delay_time(unsigned long);


~test ()
{
	env->terminateConnection(conn);
   	Environment::terminateEnvironment(env);
}	
};
class plan:virtual public test
{
public:

void p_plan();
void plan_view();
//void cusrequest();
void view_plan(int);
void chg_req_plan_p(int);
void chg_req_hand_p(int);

void chg_tobasic(int);
void chg_togold(int);
void chg_tobuyout(int);
void chg_torental(int);

void chg_ctobasic(int);
void chg_ctogold(int);
void chg_ctobuyout(int);
void chg_ctorental(int);
};

class customer:virtual public test
{
public:
void customer_c();
void view_1customer(int);
void view_customer(int);
void view_ccustomer(int);
void view_c1customer();
void view_allcustomer();

void chg_req_cusdet_c(int);
void chg_firstname(int);
void chg_lastname(int);
void chg_address(int);
void chg_cfirstname(int);
void chg_clastname(int);
void chg_caddress(int);

void view_cus_req_c(int);
void view_status(int);
void view_cstatus(int);
};

class calldetails:virtual public test
{
public:
void view_calldet_cl(int);
void view_ccalldetails(int);
void view_calldetails(int);
void calldet_cl();
void add_calldetails(int);
void add_ccalldetails();
void view_ccall_details();
int cus_id_int_cl();
int cus_id_cl();
}; 

class billgeneration:public customer,public plan,public calldetails
{
public:
void gen_bill_bg();
void generate_cbill();
void generate_bill(int);
void view_cbill();
void view_bill(int);
void view_billdet_bg(int);
};
