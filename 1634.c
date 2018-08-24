/*************************************************************************
	> File Name: 1634.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 19时39分08秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int x, n;
    scanf ("%d%d", &x, &n);

    long long int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += sum * x;
    }

    printf ("%lld\n", sum);

    return 0;
}
