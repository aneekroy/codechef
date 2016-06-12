#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int ss(int set[], int n, int sum)
{
    int sub[sum+1][n+1];
 
    for (int i = 0; i <= n; i++)
      sub[0][i] = 1;
 
    for (int i = 1; i <= sum; i++)
      sub[i][0] = 0;
 
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         sub[i][j] = sub[i][j-1];
         if (i >= set[j-1])
           sub[i][j] = sub[i][j] || sub[i ^ set[j-1]][j-1];
       }
     }
     return sub[sum][n];
}


 int main(void){
int n =0,k=0;
scanf("%d %d",&n,&k);
int *arr = new int(n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
if(ss(arr,n,k))
printf("Yes");
else
printf("No");
}
