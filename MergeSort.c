#include<stdio.h>


void Merge(int a[],int f,int mid,int l){
int i,j;
int *a1,*b1;
a1=(int *)malloc((mid-f+2)*sizeof(int));
b1=(int *)malloc((l-mid+1)*sizeof(int));
/*
for(i=0;i<l;i++){
printf("%d",a[i]);
}
*/
for(i=f;i<=mid;i++)
	a1[i-f]=a[i];
a1[i-f]=999999;

for(i=mid+1;i<=l;i++)
	b1[i-(mid+1)]=a[i];
b1[i-(mid+1)]=999999;
i=0;j=0;
int k=f;
while(1){
	if(a1[i]==999999 && b1[j]==999999)
		break;
	else if(a1[i]<b1[j]){
		a[k]=a1[i];
		i=i+1;
		k=k+1;}
	else{
		a[k]=b1[j];
		j=j+1;
		k=k+1;}	

}
}



void MergeSort(int a[],int f,int l){
int mid;
if(f==l){
	return;}

while(f<l){
	mid=(f+l)/2;
	MergeSort(a,f,mid);
	MergeSort(a,mid+1,l);
	Merge(a,f,mid,l);
	break;	
}
}

void main(){
int a[10]={56,234,36,346,1236,34,457,4345,23,1};

int f=0,l=9;

MergeSort(a,f,l);
int i;
for(i=0;i<10;i++)
	printf("%d\n",a[i]);

}
