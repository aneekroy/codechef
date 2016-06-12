#include<stdio.h>
int main(void){
	int t=0,n=0,m=0,s=0,p=0,q=0,i=0,inter1=1,inter2=1,time=0,res=0;
	scanf("%d",&t);
	while(t--){
	n=0,m=0,s=0,p=0,q=0,i=0,inter1=1,inter2=1,time=0;
	scanf("%d %d %d %d %d",&n,&m,&s,&p,&q);
	res=0;
		while(time<s){
			time++;	
			inter1+=p;
			inter2+=q;
			if(inter1>n){
				inter1%=(n+1);
				inter1+=m;
			}
			if(inter2>n){
				inter2%=(n+1);
				inter2+=m;
			}
			printf("inter1=%d inter2=%d\n",inter1,inter2);
			if(inter1==inter2){res++;}
			
		}
		printf("%d\n",res);
		res=0;
	}
return 0;
}

