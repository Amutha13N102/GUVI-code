#include <stdio.h>
int n,t;
int main(void) {
	// your code goes here
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==0)
		printf("zero\n");
		else if(n>0)
		printf("positive\n");
		else if(n<0)
		printf("negative\n");
	}
	return 0;
}
