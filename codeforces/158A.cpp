#include<bits/stdc++.h>
using namespace std;
int A[110],n,k,i;
int main(){
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)scanf("%d",A+i);
	sort(A+1,A+n+1);
	i=n-k+1;
	if(A[i]<=0)while(i<=n&&A[i]<=0)i++,k--;
	else while(i>1&&A[i-1]==A[i])i--,k++;
	printf("%d\n",k);
	return 0;
}
