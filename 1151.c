/*************************************************************************
	> File Name: 1151.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 16时10分03秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int k;
    int flag = 0;
    scanf ("%d", &k);
    for (int i = 10000; i <= 30000; i++) {
        if (i / 100 % k != 0) continue;
        if (i / 10 % 1000 % k != 0) continue;
        if (i % 1000 % k != 0) continue;
        printf ("%d\n", i);
        flag++;
    }
    if (flag == 0) {
    printf ("No\n");
    }
    return 0;
}
