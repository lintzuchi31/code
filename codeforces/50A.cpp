#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,m;
	int result=0;
	scanf("%d %d",&n,&m);
	if(n%2!=0&&m%2!=0)
	{ 
		printf("%d\n",(m-1)/2*n+(n-1)/2);
	}else 
	{ 
		printf("%d\n",m*n/2);
	}
	
	return 0;
	
}
