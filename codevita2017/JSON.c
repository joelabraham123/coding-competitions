#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char string[1000];
	gets(string);
	len = strlen(string);
	if((string[0] != '{') || ((string[len-1] != '}'))){
		printf("-1");
		return 0;
	}
	//printf("%c",string[len-1]);
	return 0;
}
