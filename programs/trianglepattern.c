#include<stdio.h>
int main(){
	int l,i,j;
	printf("Enter your limit: ");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
