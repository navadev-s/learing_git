#include<stdio.h>
void sum(int,int);
int main(){
	int x,y;
	printf("Enter 2 number :\n");
	scanf("%d%d",&x,&y);
	sum(x,y); 
}
void sum(int a,int b){
	int c;
	c=a+b;
	printf("Sum = %d\n",c);
}
