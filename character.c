#include <stdio.h>
char a;
int main(void) {
	// your code goes here
	scanf("%c",&a);
	if((a>=97&&a<=122)||(a>=65&&a<=19))
	printf("%c is a character",a);
	else
		printf("%c is not a character",a);
	return 0;
}
