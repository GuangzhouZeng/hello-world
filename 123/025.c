#include <stdio.h>

void main()
{
	enum weekday{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
	enum weekday today;
	today = 0;
	if(today == Sunday)
	{
		printf("today is Sunday\n");
	}
}