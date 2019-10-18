#include <stdio.h>
int main()
{
	int n, no, s=0;
	printf("Enter the no you want to reverse: ");
	scanf("%d",&n);

	for(;n>0;) {
		no=n%10;
		n=n/10;
		s=s*10+no;
	}

	printf("%d\n", s);
	
	return 0;
}
