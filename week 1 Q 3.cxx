#include<stdio.h>
int main()

{
	int no;
	printf("Enter any number");
	scanf("%d",&no);
	switch(no%2==0)
	{
	    case 1:
	    printf("Even");
	    break;
	    case 0:
	    printf(" Odd");
	    break;
	}
	return 0;
	
}