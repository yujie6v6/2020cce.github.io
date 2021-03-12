#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0;
	for(int i=1;i<=a;i++){
		if(a%i==0)
		n++;
	}
	printf("%d\n",n);
}
