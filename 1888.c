/*************************************************************************
	> File Name: 1888.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 20时47分17秒
 ************************************************************************/

#include<stdio.h>
#define MAX(x,y) ((x)<(y)?(y):(x))
#define MIN(x,y) ((x)>(y)?(y):(x))
int gcd (int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
int main () {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
   int x = MAX(MAX(a, b), c);
   int y = MIN(MIN(a, b), c);
   int z = gcd(x, y);
    x = x / z;
    y = y / z;

    printf ("%d/%d\n", y, x);
    return 0;
}
