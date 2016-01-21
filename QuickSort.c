#include<stdio.h>


int Partition(int a[],int f,int l){
	int i,j;
	int x=a[l];
	int temp;
	j=f;i=j-1;
	for(j=f;j<l;j++){
		if(a[j]<=x){
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;}
}
temp=a[i+1];
a[i+1]=x;
a[l]=temp;
return i+1;
}

void QuickSort(int a[],int f, int l){
int k;
if(f<l){
	k=Partition(a,f,l);
	QuickSort(a,f,k-1);
	QuickSort(a,k+1,l);		
	



}
}

void main(){

int a[10]={75,34,234,657,68,43,23,44,464,60};
int f=0,l=9;
int i;
QuickSort(a,f,l);

for (i=0;i<10;i++){
	printf("%d\n",a[i]);
}

}
