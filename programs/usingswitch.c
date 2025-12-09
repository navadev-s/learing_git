#include<stdio.h>
int main(){
	int c;
	printf("\nMenu\n\n1 for Burger\n2 for Rice\n3 for Mandhi\n\nEnter your choice: ");
	scanf("%d",&c);
	switch(c){
	case 1:
		printf("You selected Burger.\n");
		break;
	case 2:
		printf("You selected Rice.\n");
		break;
	case 3:
		printf("You selected Mandhi.\n");
		break;
	default:
		printf("Wrong Choice!!");
		break;
	}
}
	

