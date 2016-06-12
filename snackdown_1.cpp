#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long int a[10001];
	int c[10],d;
	int count,rqd_count;
	long long int b,value,count_stu;
	value=rqd_count=0;
	scanf("%d",&count);
	d=count;
	while(count--)
	{
		scanf("%lld",&count_stu);
		for(long long int i=0;i<count_stu;i++)
		{
			scanf("%lld",&b);
			a[i]=b-value;
			value=a[i];
		}
		
		for(long long int i=0;i<count_stu;i++)
		{
			scanf("%lld",&b);
			if(b<=a[i])
				rqd_count++;
		}
		c[count+1]=rqd_count;
		rqd_count=0;
	}
	for(int i=d;i>=1;i--)
		cout<<c[i]<<endl;
	
}
