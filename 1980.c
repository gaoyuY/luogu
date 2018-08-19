/*************************************************************************
	> File Name: 1980.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 21时00分54秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int n, x;
    int num = 0;
    scanf ("%d%d", &n, &x);
    for (int i = 1; i <= n; i++) {
        int y = i;
        while (!y) {
            if (y % 10 == x) {
                num++;
            }
            y /= 10;
        }
    }
    printf ("%d\n", num);

    return 0;
}
