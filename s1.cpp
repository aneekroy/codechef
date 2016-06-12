#include <iostream>
#include <cstdio>

int main(void){
	int t=0,N=0;
	long long int A[10001],B[10001],count=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&N);
		A[0]=0;count=0;
		for(long long int i=1; i<N+1;i++)
			scanf("%lld",(A+i));
		for(long long int i=0; i<N;i++)
			scanf("%lld",(B+i));
		for(long long int i=1; i<N+1;i++){
			if((A[i]-A[i-1])>=B[i-1])
				count++;
		}
		printf("%lld\n",count);
	}

}