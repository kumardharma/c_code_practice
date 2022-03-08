#include<stdio.h>
int main()
{
	int num,pos,i,j;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Binary of the number is:\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",(num>>pos)&1);
	printf("\n");
	printf("reverse of the number is:\n");
	for(i=31,j=0;i>j;i--,j++)
	{	
		if((num>>i&1)!=(num>>j&1))
			{ 
			num^=1<<i;
			num^=1<<j;

			}
	}
	for(pos=31;pos>=0;pos--)
		printf("%d",(num>>pos)&1);
	printf("\n");
	return 0;

}
