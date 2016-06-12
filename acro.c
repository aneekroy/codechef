#include<stdio.h>
#define PI 3.14159265359
int main(void)
{	double h1=0,r1=0,h2=0,r2=0;int t=0;
	scanf("%d",&t);
	while(t--){
	scanf("%lf %lf %lf %lf",&r1,&h1,&r2,&h2);
	printf("%.15lf %.15lf\n",(((1/3.0)*PI*r1*r1*h1)+((2.0/3.0)*r1*PI)),(PI*r2*r2*h2));}
	return 0;
}
