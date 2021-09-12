#include <iostream>
#include <cstdio>
using    namespace    std;
int    main(void)
{
    long    long    n,m,a;
    long    long    ans;
 
    scanf("%lld%lld%lld",&n,&m,&a);
    ans = (n / a + ((n % a) ? 1 : 0)) * (m / a + ((m % a) ? 1 : 0));
    printf("%lld\n",ans);
 
    return    0;
}
