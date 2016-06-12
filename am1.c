#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <vector>
using namespace std;
typedef long long int lli;
/*lli countpair(lli arr[],lli size,lli b) {
    long long int cnt = 0;
    long long int i = 0,low = size-1,high = size－1;
    while (i<high) {
         low=max(i, low);
         while (low > i && arr[i] + arr[low] >= 0) --low;
        while (high > low && arr[i] + arr[high] > b) --high; 
        cnt += (high-low);
        ++i;
    }
    return cnt;
}*/
int cp(lli arr[],lli size,lli b){
int cnt=0,i=0,low=size-1,high=size-1;
while (i<high) {
         low=max(i, low);
         while (low > i && arr[i] + arr[low] >= 0) --low;
        while (high > low && arr[i] + arr[high] > b) --high; 
        cnt += (high-low);
        ++i;
    }
    return cnt;
}

int main(void){
	int t;
	scanf("%d", &t);lli res=0,j=0;
	while(t--){
		lli n=0,x=0,m=0;res=0;
		scanf("%lld", &n);
		lli *a = (lli*)malloc(sizeof(lli) * n);
		lli *a2 = (lli*)malloc(sizeof(lli) * n);
		scanf("%lld %lld",&m,&x);
		for(lli i = 0; i < n; i++){
			scanf("%lld", &a[i]);
			a2[i]=(2*a[i])%m;
			a[i]%=m;
		}
		sort(a, a + n);		
		sort(a2, a2 + n);
		int i=0;res=0;
		while(a2[i++]<=x){
			res++;
		}		
		/*for( i = 0; i < n; i++){
			for(j=i+1;j<n;j++){
					if((a[i] + a[j])%m <=x){
						res++;
					}
			}
		}*/
		printf("%lld\n",res+cp(a,n,m));
	}
	return 0;
}
