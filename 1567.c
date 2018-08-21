/*************************************************************************
	> File Name: 1567.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月20日 星期一 20时02分57秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
int main () {
    int n;
    int a[MAX_N + 5];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int max = 0;
    int sum = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            sum++;
        }
        if (a[i] <= a[i -1]) {
            if (sum > max) {
                max = sum;
            }
            sum = 1;
        }
    }

    printf ("%d\n", max);
    return 0;
}
