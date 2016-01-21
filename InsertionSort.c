#include<stdio.h>


void main(){
int a[10]={23,43,1,6,2,44,3445,23,54,6};
int i,j;
int x;
for(i=1;i<10;i++){
	j=i-1;
	x=a[i];	
	while(j>=0 && a[j]>x){
		a[j+1]=a[j];
		j=j-1;
	a[j+1]=x;	
}
}

for(i=0;i<10;i++){
	printf("%d\n",a[i]);
}

}
