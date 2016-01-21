#include<stdio.h>


void Heapify(int a[],int i,int l){

int c1=2*i+1,c2=(2*i+2);
	
int temp,temp1;
int temp_c1,temp_c2;
int x,y;
if (c1>l)
	return;
x=a[c1];
temp_c1=c1;

if(c2>l)
	y=0;
else{
	y=a[c2];
	temp_c2=c2;
}
if(x>y)
	temp=temp_c1;
else
	temp=temp_c2;

if(a[i]<a[temp]){
	temp1=a[i];
	a[i]=a[temp];
	a[temp]=temp1;
	}

if(temp<=l)
	Heapify(a,temp,l);
}


void BuildHeap(int a[],int l){
int i;
for(i=l/2;i>=0;i--)
	Heapify(a,i,9);


}


HeapSort(int a[],int l){
int i,temp;
BuildHeap(a,l);
temp=a[l];
a[l]=a[0];
a[0]=temp;
for (i=l-1;i>=0;i--){
	Heapify(a,0,i);
	temp=a[0];
	a[0]=a[i];
	a[i]=temp;}37


}


void main(){
int i;
int a[10]={4,364,23,235,232,1,134,46,346,44};

HeapSort(a,9);
for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
