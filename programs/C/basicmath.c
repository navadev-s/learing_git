#include<stdio.h>
int main(){
	int a,b,c,r;
	printf("Enter the 2 numbers : ");
	scanf("%d%d",&a,&b);
	printf("1 for Addition\n2 for Subraction\n3 for Multiplication\n4 for Division\nEnter your choice: ");
	scanf("%d",&c);
	if(c==1){
		r=a+b;
		printf("Result = %d\n",r);
	}
	else if(c==2){
		r=a-b;
		printf("Result = %d\n",r);
	}
	else if(c==3){
		r=a*b;
		printf("Result = %d\n",r);
	}
	else if(c==4){
		r=a/b;
		printf("Result = %d\n",r);
	}
	else{
		printf("Wrong Choice!!\n");
	}
}
	
