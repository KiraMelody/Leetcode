#include<iostream>
#include<cstdio>
using namespace std;
double myPow(double x, int n) {
    int t = labs(n);
    double ans = 1;
    if (x == 1.0)
        return 1.0;
    if (x == -1.0)
        return n & 1? -1.0 : 1.0;
    if (n == (-1 << 31))
        return 0;
    while(t > 0)
    {
        if (t % 2 == 1)
            ans *= x;
        x *= x;
        t >>= 1;
    }
    if (n < 0)
        ans = 1.0 / ans;
    return ans;
}
int main()
{
    printf("%lf", myPow(2.00000, -2));
}