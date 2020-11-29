#include<stdio.h>
main()
{
	int choice,cost;
	printf("pick an item:\n1.pizza,Rs 239\n2.burger,Rs 129\n3.patsa,Rs 179\n4.frenchfries,Rs 99\n");
	scanf("%d",&choice,&cost);
	switch(choice)
	{
		case 1:
			printf("your choice is pizza\n");
			printf("the cost is 239");
			break;
		case 2:
			printf("your choice is burger\n");
			printf("the cost is 129");
			break;
	    case 3:
	    	printf("your choice is pasta\n");
	    	printf("the cost is 179");
	    	break;
	    case 4:
	    	printf("your choice is frenchfries\n");
	    	printf("the cost is 99");
	    	break;
	    default:
	    	printf("your choice is invalid\n");
	}
}
