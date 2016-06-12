#include<stdio>
#define PI 3.14159265359
int main(void)
{	float h1=0,r1=0,h2=0,r2=0;int t=0;
	scanf("%d",&t);
	while(t--){
	scanf("%f %f %f %f",&r1,&h1,&r2,&h2);
	printf("%.6f %.6f\n",(((1/3.0)*PI*r1*r1*h1)+((2.0/3.0)*r1*PI)),(PI*r2*r2*h2));}
	return 0;
}
