#include<stdio.h>
int main(){
	int i,n,r;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		r=i*n;
		printf("%d*%d=%d\n",i,n,r);
	}
}
