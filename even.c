#include <stdio.h>
int n,t;
int main(void) {
	// your code goes here
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0)
		printf("even\n");
		else if(n%2!=0)
		printf("odd\n");
	}
	return 0;
}
