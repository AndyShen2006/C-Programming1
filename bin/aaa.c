#include <stdio.h>
void swap(char *x,char *y)
{
	char tmp;
	
	tmp=*x;
	*x=*y;
	*y=tmp; 
}
int main(int argc, char *argv[])
{
	char x='A', y='B';
	putchar(x);
	putchar(y);
	swap(&x,&y);
	putchar(x);
	putchar(y);
	return 0;
}
