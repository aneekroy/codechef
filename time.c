#include<math.h>
#include<stdio.h>

typedef struct{
	int HH;
	int MM;
}time;
typedef struct{
	int avail;
	time arr[6];
}val;

/*printing function*/

void p(int hrs,int mins){
	if(hrs<10){
			if(mins<10){
				printf("0%d:0%d\n",hrs,mins);
			}
			else{
				printf("0%d:%d\n",hrs,mins);
			}
		}
		else{
			if(mins<10){
				printf("%d:0%d\n",hrs,mins);
			}
			else
			printf("%d:%d\n",hrs,mins);
		}
	return;
} 

/*printing function*/

int main(void){int i=0,j=0;
	val a[361];
	for(i=0;i<361;i++){
		a[i].avail=0;
		for(j=0;j<6;j++){
			a[i].arr[j].HH=0;
			a[i].arr[j].MM=0;
		}
	}
		int a2=0;
	float angle=0,mul=5.5;
	for( i=0;i<12;i++){
		for(j=0;j<60;j++){
			a[a2].arr[a[a2].avail].HH=i;
			a[a2].arr[a[a2].avail++].MM=j;
			//printf("angle=%f HH=%d MM=%d\n",(float)(a2/2.0),i,j);
			angle+=mul;	
				if(angle>180){
					angle=360-angle;
					mul*=-1;
				}
				if(angle<0){
					angle*=-1;
					mul*=-1;
				}
			a2=(int)(angle*2);
		}
	}
	/*for(i=0;i<361;i++){
		if(a[i].avail!=0){
			for(j=0;j<a[i].avail;j++){
				printf("angle=%f HH=%d MM=%d \n",(float)(i/2.0),(a[i].arr[j].HH),(a[i].arr[j].MM));
			}
		}
	}*/
	angle=0;
	int t=0;	float ang2=0,angmin=0,angmax=0;int angle2=0;

	scanf("%d",&t);
	while(t--){
		scanf("%f",&angle);
		ang2=angle*2;
		if(ceil(angle)==angle){
			angle2=(int)ang2;
			if(a[angle2].avail!=0){
			for(j=0;j<a[angle2].avail;j++){
				//printf("angle=%f HH=%d MM=%d \n",(float)(angle2/2.0),(a[angle2].arr[j].HH),(a[angle2].arr[j].MM));
				p((a[angle2].arr[j].HH),(a[angle2].arr[j].MM));	
				}
			}
		}
		else{
			angmin=ang2-(1.0/60);		
			angmax=ang2+(1.0/60);
			if((ceil(angmin)<angmax)||(floor(angmax)>angmin)){
				angle2=(int)ceil(angmin);
				if(a[angle2].avail!=0){
					for(j=0;j<a[angle2].avail;j++){
				//printf("angle=%f HH=%d MM=%d \n",(float)(angle2/2.0),(a[angle2].arr[j].HH),(a[angle2].arr[j].MM));
					p((a[angle2].arr[j].HH),(a[angle2].arr[j].MM));						
					}
				}
			}	
		}
	}




	return 0;
}
