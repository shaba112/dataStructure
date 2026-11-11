#include<stdio.h>
int main() {
	int a[100],n,i,pos,value;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter element to insert:");
	scanf("%d",&value);
	printf("Enter position:");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
		a[i]=a[i-1];
	a[pos-1]=value;
	n++;
	printf("Updated array:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}

