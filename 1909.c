/*************************************************************************
	> File Name: 1909.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 16时12分45秒
 ************************************************************************/

#include<stdio.h>
int price_sum (int num, int x, int y) {
    int ans = 0;
    if (num % x > 0) {
        ans = (num / x + 1) * y;
    }else {
        ans = num / x * y;
    }

    return ans;
}
int main () {
    int num;
    int x, y;
    int ans = 0;
    long int min = 0X7fffff;
    scanf ("%d", &num);
    for (int i = 1; i <= 3; i++) {
        scanf ("%d%d", &x, &y);
        ans = price_sum(num, x, y);
        if (ans < min) {
            min = ans;
        }
    }

    printf ("%ld\n", min);

    return 0;}
