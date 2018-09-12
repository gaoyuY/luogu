/*************************************************************************
	> File Name: 1534.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月11日 星期二 11时56分32秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int n, a, b;
    int sum = 0, ans = 0;
    scanf ("%d", &n);
    while (n--) {
        scanf ("%d%d", &a, &b);
        sum = sum + a + b - 8;
        ans += sum;
    }

    printf ("%d\n", ans);

    return 0;
}
