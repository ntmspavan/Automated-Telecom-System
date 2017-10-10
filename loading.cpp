#include<iostream>
#include<cstdlib>
using namespace std;
int delay_time(unsigned long milisec)
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

int main()
{


system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  (\033[1;31m 5\033[0m )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /     \033[1;31m 5\033[0m       '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\tpreparing your dashboard  in        |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
delay_time(1000);



system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  (\033[1;32m 4\033[0m )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /     \033[1;32m 4\033[0m       '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\tpreparing your dashboard  in        |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
delay_time(1000);

system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   (\033[1;33m 3\033[0m )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /     \033[1;33m 3\033[0m       '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\tpreparing your dashboard  in        |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
delay_time(1000);

system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. (\033[1;34m 2\033[0m ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /     \033[1;34m 2\033[0m       '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\tpreparing your dashboard  in        |( 7 ) |   |________|   | ( 1 )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
delay_time(1000);

system("clear");
cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t                      _...----..._ \n";
cout<<"\t\t\t\t\t\t\t\t                   ,-'    ,-.     `-. \n";
cout<<"\t\t\t\t\t\t\t\t                 ,' ,-.  ( 4 )   ,-. `.\n";
cout<<"\t\t\t\t\t\t\t\t               ,'  ( 5 )  `-'   ( 3 )  `.\n";
cout<<"\t\t\t\t\t\t\t\t              / ,-. `-',-''  ``-.`-' ,-. ',\n";
cout<<"\t\t\t\t\t\t\t\t             / ( 6 ) ,'          `. ( 2 ) ', \n";
cout<<"\t\t\t\t\t\t\t\t            :   `-' /     \033[1;35m 1\033[0m       '. `-'  :\n";
cout<<"\t\t\t\t\t\t\t\t            | ,-.  :    ________    :  ,-. |\n";
cout<<"\t\t\t\t\tpreparing your dashboard  in        |( 7 ) |   |________|   | (\033[1;35m 1\033[0m )|\n";
cout<<"\t\t\t\t\t\t\t\t            | `-'  :    seconds     ;  `-' |\n";
cout<<"\t\t\t\t\t\t\t\t            :   ,-.'.              /       ;\n";
cout<<"\t\t\t\t\t\t\t\t            '. ( 8 ) `.          ,'(`.    /\n";
cout<<"\t\t\t\t\t\t\t\t             '.  `-' ,-.`-..__..-'  )( `-./\n";
cout<<"\t\t\t\t\t\t\t\t               `.  ( 9 )   ,-.       (  ,'\n";
cout<<"\t\t\t\t\t\t\t\t                 `. `-'   ( 0 )      ,'`\n";
cout<<"\t\t\t\t\t\t\t\t                   `-._    `-'   _.-'\n";
cout<<"\t\t\t\t\t\t\t\t                       ```----''' ATLS\n";
delay_time(1000);

return 0;
}
