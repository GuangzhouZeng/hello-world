#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",add(x,y));

}