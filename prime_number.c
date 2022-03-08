 #include<stdio.h>
int main()

{
	int num,c,i;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(c=0,i=1;i<=num;i++)
	{
		if(num%i==0)
			c++;
	}
	if(c==2)
		printf("prime number\n");
	else
		printf("not a prime number\n");
	return 0; 
}
