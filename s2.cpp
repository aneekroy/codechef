#include <iostream>
#include <cstdio>
#include <math.h>
#include <limits.h>

using namespace std;
int low,high;

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 	int low =0;high = size-1;
   for (int i = 1; i < size; i++)
   {
   		 if((max((a[i]),(curr_max+a[i]))) == a[i])
        	low = i ;
        curr_max = max(a[i], curr_max+a[i]);
        
        max_so_far = max(max_so_far, curr_max);
        if(max(max_so_far,curr_max)==curr_max)
        	high=i;
   }
   return max_so_far;
}
  
int main(void){
	int t=0,n=0;
	int lower =0, higher =0,lf=0,hf=0;
	int lower_sum=0,higher_sum=0;
	int sub_sum=0;
	int min_in_array =0;
		scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int *a=new int(n);
		for(int i=0;i<n;i++)
			scanf("%d",(a+i));
		sub_sum=maxSubArraySum(a,n);
		printf("sub_sum=%d\n",sub_sum);
		printf("low=%d high=%d\n",low,high);
		int curr_sum=0;
		if((low-2)>=0){
			lower=a[low-2];
			lf=1;
			lower_sum=lower+sub_sum;
		}
		if((high+2)<=(n-1)){
			higher=a[high+2];
			hf=1;
			higher_sum=higher+sub_sum;
		}
		min_in_array=a[low];
		for (int i = low+1; i <= high; ++i)
		{
			if(a[i]<min_in_array)
				min_in_array=a[i];
		}
		if(min_in_array<0){
			curr_sum=sub_sum-min_in_array;
		}
		else{
			curr_sum=sub_sum;
		}
		if(lf)
			curr_sum=max(curr_sum,lower_sum);
		if(hf)
			curr_sum=max(curr_sum,higher_sum);
		printf("%d\n",curr_sum);
		}


		return 0;
	}
