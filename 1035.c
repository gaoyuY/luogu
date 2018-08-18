/*************************************************************************
	> File Name: 1035.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 17时03分27秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int k, n;
    double sum = 1;
    scanf ("%d", &k);
    for (int i = 2; ; i++) {
        if (sum > k) {
            n = i - 1;
            break;
        }
        sum += 1.0 / i;
    }
    printf ("%d\n", n);

    return 0;
}
