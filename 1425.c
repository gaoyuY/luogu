/*************************************************************************
	> File Name: 1425.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 15时42分22秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int a, b , c, d;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    int hour, min;
    hour = c - a;
    if (d < b) {
        hour--;
        min = d + 60 -b;
    }else {
        min = d - b;
    }

    printf ("%d %d\n", hour, min);

    return 0;
}
