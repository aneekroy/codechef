#include<stdio.h>
#include<math.h>

int prime(long long int n){
	long long int i=0;
	
	if(n==2||n==3||n==5||n==7)
		return 1;
	
	if(n==1||n%2==0)
		return 0;

	for(i=3;i<=(int)sqrt(n);i+=2){

		if(n%i==0)
			return 0;

	}
	return 1;
}


int main(void){

	int t=0;
	long long int a=0,b=0,i=0,res=0,j=0,inres=0,flag=0;
	scanf("%d",&t);
	while(t--){

		inres=0;

		scanf("%lld %lld",&a,&b);res=0;

		for(i=a;i<=b;i++){

			inres=0;
			
			if(prime(i)){
				res++;
				printf("%lld\n",i);			
			}
			else{//printf("NOT PRIME%lld\n",i);
				inres=0;flag=0;
				for(j=2;j<=(int)sqrt(i);j++){
					if(i%j==0)
						inres++;
					if(j==(int)sqrt(i)&&i%j==0){
						flag=1;
						inres--;
					}
				};
				if(flag)
				inres=inres*2+1;				
				else
				inres*=2;
				/*
				if(i%((int)sqrt(i))==0)
					inres++;
				*/
				
				if(prime(inres+2)){
					res++;
				printf("%lld\n",i);
				}
			}
		}
		printf("%lld\n",res);
	}
return 0;
}
	
		
