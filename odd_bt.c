#include <stdio.h>
int i,a,b;
int main(void) {
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	return 0;
}
