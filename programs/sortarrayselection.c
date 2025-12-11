#include<stdio.h>
int main(){
	int i,j,temp,n,a[100];
	printf("Enter your array limit : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Original Array : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){
			break;
		}
		else{
			printf(",");
		}
	}
	printf("]\n");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted array : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){
			break;
		}
		else{
			printf(",");
		}
	}
	printf("]\n");
}
		
	
	
