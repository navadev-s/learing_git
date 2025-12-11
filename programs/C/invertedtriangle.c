#include<stdio.h>
int main(){
	int l,i,j;
	printf("Enter your limit: ");
	scanf("%d",&l);
	for(i=l;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
