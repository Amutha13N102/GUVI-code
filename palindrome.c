#include <stdio.h>
int main(void) {
	// your code goes here
	int arr[20],i=0,j,n,k;
	long int num;
	scanf("%ld",&num);
	while(num!=0)
	{
		arr[i]=num%10;
		num=num/10;
		i++;
	}
	i--;
	j=0;
	n=i;
	for(k=i;k<=n;k++)
	{
		if(arr[i]==arr[j])
		{
			i--;
			j++;
		}
		else
		{
			printf("NO");
			exit(0);
		}
		
	}
	printf("YES");
	return 0;
}
