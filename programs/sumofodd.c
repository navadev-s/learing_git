#include<stdio.h>
int main(){
	int n,i,r=0;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==1){
			r=r+i;
		}
	}
	printf("Sum of odd number till %d is %d.\n",n,r);
}

