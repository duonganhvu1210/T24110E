#include<stdio.h>
int main()
{
	FILE *f;
	f = fopen("E:/T2410E/C/C.txt", "r");
	char ch;
	while(!feof(f))
	{
		ch =fgetc(f);
		printf("%c", ch);
	}
}
