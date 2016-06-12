#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
#include <math.h>
#include <algorithms>
using namespace std;

int main(void){
	int t=0;
	string str;
	int ch[26]={0};

	int min =0,max=0,max_freq=0,count=0,min_freq=0;
	int k=0;
	scanf("%d",&t);
	int update =0;
	while(t--){
		cin>>str;
		for(int i =0; i< 26; i++)
			ch[i]=0;
		scanf("%d",&k);
		int a[] = new int((int)(str.length()+1));
		for (int i=0; i<str.length(); ++i)
    		ch[((int)str.at(i)-97)]++;

    	min =0,max=0,max_freq=0,count=0,min_freq=0;
    	for(int i =0; i< 26; i++)
    		if(ch[i]>0){
    			if(ch[i]>max)
    				max=ch[i];
    			if(count==0)
    				min=max;
    			if(ch[i]<min)
    				min=ch[i];
    			count++;
    		}
    	update=0,count=0;
    	printf("\nmax=%d min=%d\n",max,min );
    	if((max-min)<=k){
    		printf("0\n");
    	}
    	else{
    	for(int i =0; i< 26; i++){
    		if((ch[i]>0)&&(max==ch[i])){
    			max_freq++;
    		}
    		if((ch[i]>0)&&(min==ch[i])){
    			min_freq++;
    		}
    		}

    	printf("\nmax_freq=%d min_freq=%d\n",max_freq,min_freq );
    	update = max-min-k;
    	while(update){
    		for(int i =0; i< 26; i++)
    		if(ch[i]>0)
    			a[count++]=ch[i];	
    	sort(a,a+count);

    		printf("%d\n",max_freq );
    	else{
    	

	}
}
                         