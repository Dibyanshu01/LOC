#include<stdio.h>
int main()

{
	int a,b,choice;
	printf("Enter your choice");
	scanf("%d",&choice);
	printf("Enter any two number:");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
	    case 1:
	    printf("sum=%d",a+b);
	    break;
	    case 2:
	    printf("difernetiation=%d",a-b);
	    break;
	    case 3:
	    printf("multiplication=%d",a*b);
	    break;
	    case 4:
	    printf("division=%d",a/b);
	}
	return 0;
	
}