#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, ans;
    for(int i = 0; i < 5; ++i)
    {
    	for(int j = 0; j < 5; ++j)
	{
    	    cin >> T;
	    if(T == 1)
	    {
    	        ans = fabs(i - 2) + fabs(j - 2);
    	    }
    	}
    }	
    cout << ans << endl;
    return 0;
}
