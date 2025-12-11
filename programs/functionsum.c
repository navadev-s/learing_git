#include<stdio.h>
void sum();
int main(){
	sum();
	sum();
	return 0;
}
void sum(){
	int a,b;
	printf("Enter 2 numbers :\n");
	scanf("%d%d",&a,&b);
	printf("Sum = %d\n",a+b);
}
