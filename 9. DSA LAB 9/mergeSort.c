/*
MERGE SORT
23-10-2024
 */
#include<stdio.h>
void merge(int a[],int low,int mid,int high){
	int temp[100],i=low,j=mid+1,k=0;
	while((i<=mid) &&(j<=high)){
		if(a[i]<=a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=high){
		temp[k++]=a[j++];
	}
	for(int i=low,k=0;i<=high;i++,k++){
		a[i]=temp[k];
	}
	
}
void mergeSort(int a[],int low,int high){
	if(low<high){
	int mid=(low+high)/2;
	mergeSort(a,low,mid);
	mergeSort(a,mid+1,high);
	merge(a,low,mid,high);
	}
}
int main(){
	int i,n;
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}printf("\nThe elements are: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	mergeSort(a,0,n-1);
	printf("\nThe sorted array is: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
