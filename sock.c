#include<stdio.h>


int main(void){
 
long long jacket=0,sock=0,money=0,rem=0,no_of_socks=0,m=0;
scanf("%ll %ll %ll",&jacket,&sock,&money);
m=money;
m-=jacket;
if(m>sock){
rem=m%sock;
m-=rem;
no_of_socks=m/sock;
if(no_of_socks%2==0)
printf("Lucky Chef");
else
printf("Unlucky Chef");
}
else{
printf("Lucky Chef");
}
return 0;
}
