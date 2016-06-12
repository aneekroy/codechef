#include<stdio.h>

int main(void)
{
	int balaji=0,bipin=0,t=0;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&bipin,&balaji);
	if(bipin>balaji)
	printf("Bipin %d\n",(bipin-balaji));
	else if(balaji>bipin)
	printf("Balaji %d\n",(balaji-bipin));
	else
	printf("No Winner\n");
	}
return 0;
}
