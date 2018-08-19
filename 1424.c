/*************************************************************************
	> File Name: 1424.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 19时57分28秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int x;
    long int n;
    long long int sum = 0; 
    scanf ("%d%ld", &x, &n);
    for (int i = x; n != 0; i++) {
        n--;
        if (i % 7 == 0 || i % 7 == 6) {
            continue;
        }
        sum += 250;
    }

    printf ("%lld\n", sum);

    return 0;
}
