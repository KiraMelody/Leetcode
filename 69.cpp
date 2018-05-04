#include<iostream>
#include<cstdio>
using namespace std;
int mySqrt(int x) {
    int ans = 0;
    int l = 0, r = x;
    while(l < r)
    {
    	unsigned long long m = (l + r) >> 1;
    	unsigned long long product = m * m;
    	if (product == x)
    	{
    		ans = m;
    		return ans;
    	}
    	else if (product < x)
    	{
    		l = m + 1;
    		ans = m;
    	}
    	else
    	{
    		r = m - 1;
    	}
    } 
    if (l * l <= x)
    	ans = l;
    return ans;
}
int main()
{
	printf("%d", mySqrt(2147395599));
}