#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<stdio.h>
#include"t3_adm.h"
using namespace std;
int main()
{
test t;
char ch,ch1[2];
int y,y1,i=31;
 for (y=5;y>0;y--)
 {
system("clear");
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;"<<i<<"m   AUTOMATED TELECOM SYSTEM FOR LANDLINE/WLL SERVICES\033[0m \n\n\n "<<endl;
cout<<"\t\t\t\t\t\t\t             _.===========================._ \n";
cout<<"\t\t\t\t\t\t\t           .'`  .-  - __- - - -- --__--- -.  `'.\n";
cout<<"\t\t\t\t\t\t\t        _ / ,'`     _|--|_________|--|_     `'. \. \n";
cout<<"\t\t\t\t\t\t\t      /'--| ;    _.'\ |  '         '  | /'._    ;|\n";
cout<<"\t\t\t\t\t\t\t     //   | |_.-' .-'.'    -  -- -    '.'-. '-._||\n";
cout<<"\t\t\t\t\t\t\t    (\)   \"` _.-` /                     \ `-._ `/\n";
cout<<"\t\t\t\t\t\t\t    (\)    `-`    /      .---------.      \    `-` \n";
cout<<"\t\t\t\t\t\t\t    (\)           |      ||1||2||3||      | \n";
cout<<"\t\t\t\t\t\t\t   (\)            |      ||4||5||6||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)             |      ||7||8||9||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)           ___|     ||*||0||#||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)          /.--|     '---------'      | \n";
cout<<"\t\t\t\t\t\t\t  (\)         (\)  |\_  _  __   _   __  __/ | \n";
cout<<"\t\t\t\t\t\t\t  (\)        (\)   |                       | \n";
cout<<"\t\t\t\t\t\t\t  (\)_._._.__(\)   |                       | \n";
cout<<"\t\t\t\t\t\t\t   (\\\\ATLS\\\)      '.___________________.' \n";
cout<<"\t\t\t\t\t\t\t    '-'-'-'--' \n";
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tPreparing Home screen in \033[1;"<<i<<"m"<<y<<"\033[0m seconds"<<endl;
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tThanks To Mr.Senthil  Mr.Pandian & Mrs.Santha"<<endl;
i++;
t.delay_time(1000);

}
//cout<<"Press any key to continue";
//cin.get();

do
{
//try{
/* int count;
                        for(count=2;count>0;count--)
                        {
                     system("clear");

 cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\tAUTOMATED TELECOM SYSTEM FOR LANDLINE/WLL SERVICES\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*********************************************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\tLoading....\t\t\t\t\t\t*\n\t\t\t\t\t*********************************************************************************" << endl;
                        }
t.delay_time(3000);
*/
system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\033[1;35moooo     oooo   ooooooooooo   ooooo           oooooooo8     ooooooo    oooo     oooo   ooooooooooo";
cout<<"\n\t\t\t\t 88   88  88     888    88     888          o888     88   o888   888o   8888o   888     888    88";
cout<<"\n\t\t\t\t  88 888 88      888ooo8       888          888           888     888   88 888o8 88     888ooo8";
cout<<"\n\t\t\t\t   888 888       888    oo     888      o   888o     oo   888o   o888   88  888  88     888    oo";
cout<<"\n\t\t\t\t    8   8       o888ooo8888   o888ooooo88    888oooo88      88ooo88    o88o  8  o88o   o888ooo8888\033[0m";
cout<<"\n\n\n\n\t\t\t\t\t\033[1;31m*********************************************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\033[0m\t\tAUTOMATED TELECOM SYSTEM FOR LANDLINE/WLL SERVICES\t\t\033[1;31m*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*********************************************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\033[0m\t\t\t\t1) Customer Representative Login\t\t\033[1;31m*\n\t\t\t\t\t*\033[0m\t\t\t\t2) User Login\t\t\t\t\t\033[1;31m*\n\t\t\t\t\t*\033[0m\t\t\t\t3) Plan Details\t\t\t\t\t\033[1;31m*\n\t\t\t\t\t*\033[0m\t\t\t\t4) Exit\t\t\t\t\t\t\033[1;31m*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t\t\t\t*\n\t\t\t\t\t*********************************************************************************\033[0m\n" << endl;

       cout << "\t\t\t\t\tEnter a menu choice : ";
 cin.clear();
	cin>>ch1;
cin.ignore();
 cin.clear();
//       if(ch>4)
//	throw "\t You have entered an invalid number ...Enter valid number";
	 cout << '\n';
//if((ch[0]=='1' ||ch[0]=='2' ||ch[0]=='3' ||ch[0]=='4')&& ch[1]=='\0')
//if((ch>64&&ch<91)||(ch>96&&ch<123))
//throw "\tYou have entered the character.. Enter only Numbers.... ";
//else if(ch>'4'&& ch=='\0')
//throw "\tYou have entered an invalid number .. Enter valid Number.... ";
//else if(ch>'0'&&ch<'5')
try{
if(((ch1[0]=='1')||(ch1[0]=='2')||(ch1[0]=='3')||(ch1[0]=='4'))&&(ch1[1]=='\0')&&ch1[1]<'0')
{
        switch ( ch1[0] )
                {
                   case '1':
                    system("clear");
                    t.admin_auth();
		    break;
                    case '2':
                     system("clear");
		     t.user_auth();
				break;
                        case '3':
                      	t.main_plan();
       		                    break;
                        case '4':goto out; break;    
			
			//default:
			  //cout<<"Enter a Valid Option......";
  }
}


//else 
//throw "\tYou have entered the invalid option...Enter only the Numbers....";
else{
throw "\n\n\t\t\t\t\t\tYou have entered an invalid number .. Enter valid Number in that number.... ";
}
}
catch(const char* msg)
{
t.delay_time(1000);
cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\033[1;31m-----ERROR MESSAGE------\033[0m"<<msg;
}

}while(!(ch1[0]>64 && ch1[0]<91)||!(ch1[0]>96 && ch1[0]<123)||!(ch1[0]=='4'));
 //}while(ch!='4');
out:
int i1=36;
for (y=3;y>0;y--)
 {
system("clear");
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\033[1;"<<i1<<"m   AUTOMATED TELECOM SYSTEM FOR LANDLINE/WLL SERVICES \033[0m\n\n\n "<<endl;
cout<<"\t\t\t\t\t\t\t             _.===========================._ \n";
cout<<"\t\t\t\t\t\t\t           .'`  .-  - __- - - -- --__--- -.  `'.\n";
cout<<"\t\t\t\t\t\t\t        _ / ,'`     _|--|_________|--|_     `'. \. \n";
cout<<"\t\t\t\t\t\t\t      /'--| ;    _.'\ |  '         '  | /'._    ;|\n";
cout<<"\t\t\t\t\t\t\t     //   | |_.-' .-'.'    -  -- -    '.'-. '-._||\n";
cout<<"\t\t\t\t\t\t\t    (\)   \"` _.-` /                     \ `-._ `/\n";
cout<<"\t\t\t\t\t\t\t    (\)    `-`    /      .---------.      \    `-` \n";
cout<<"\t\t\t\t\t\t\t    (\)           |      ||1||2||3||      | \n";
cout<<"\t\t\t\t\t\t\t   (\)            |      ||4||5||6||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)             |      ||7||8||9||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)           ___|     ||*||0||#||      | \n";
cout<<"\t\t\t\t\t\t\t  (\)          /.--|     '---------'      | \n";
cout<<"\t\t\t\t\t\t\t  (\)         (\)  |\_  _  __   _   __  __/ | \n";
cout<<"\t\t\t\t\t\t\t  (\)        (\)   |                       | \n";
cout<<"\t\t\t\t\t\t\t  (\)_._._.__(\)   |                       | \n";
cout<<"\t\t\t\t\t\t\t   (\\\\ATLS\\\)      '.___________________.' \n";
cout<<"\t\t\t\t\t\t\t    '-'-'-'--' \n";
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tExiting Program in \033[1;"<<i1<<"m"<<y<<"\033[0m seconds"<<endl;
cout<<"\n\n\n\n\t\t\t\t\t\t\t\tThanks To Mr.Senthil & Mrs.Santha"<<endl;
i1--;
t.delay_time(1000);

}
t.delay_time(1000);
system("clear");
//cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\033[1;31m Thank You......\033[0m"<<endl;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\033[1;31mTTTTTTT  hh                         kk         YY   YY";
cout<<"\n\t\t\t\t\t  TTT    hh         aa aa  nn nnn   kk  kk     YY   YY   oooo   uu   uu";
cout<<"\n\t\t\t\t\t  TTT    hhhhhh    aa aaa  nnn  nn  kkkkk       YYYYY   oo  oo  uu   uu";
cout<<"\n\t\t\t\t\t  TTT    hh   hh  aa  aaa  nn   nn  kk kk        YYY    oo  oo  uu   uu";
cout<<"\n\t\t\t\t\t  TTT    hh   hh   aaa aa  nn   nn  kk  kk       YYY     oooo    uuuu u\033[0m\n\n\n\n\n\n\n\n\n";
return 0;
}
                          
                                                    
