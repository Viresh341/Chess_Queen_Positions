#include<stdio.h>
int main()
{
	int x,y,m,n;
	printf("Please enter position of the queen in chess board:");
	scanf("%d %d",&x,&y);
	m=x;
	n=y;
    printf("Diagonal positions are \n");
	while(m>1 && n>1)
	{
		m--;
		n--;
		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m<8 && n<8)
	{
		m++;
		n++;
		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m<8 && n>1)
	{
		m++;
		n--;
		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m>1 && n<8)
	{
		m--;
		n++;
		printf("(%d,%d)\n",m,n);
    }
    printf("plus positions are \n");
	m=x;
	n=y;
	while(m>1 && n>1)
	{
		n--;
		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m<8 && n<8)
	{
		n++;
		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m<8 && n>1)
	{
		m++;

		printf("(%d,%d)\n",m,n);
    }
	m=x;
	n=y;
	while(m>1 && n<8)
	{
		m--;
		printf("(%d,%d)\n",m,n);
    }
    return 0;
}