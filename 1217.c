/*************************************************************************
	> File Name: 1217.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月10日 星期一 16时52分15秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100000000

void function () {
    for (int )
    int m = x;
    int n = 0;
    while(m) {
        n = n * 10 + m % 10;
        m /= 10;
    }
    if (n == x) 
        return 1;
    return 0;
}
int main () {
    int a, b;
    scanf ("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (Prime(i) && function(i))
            printf ("%d\n", i);
    }
    return 0;
}
