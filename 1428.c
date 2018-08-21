/*************************************************************************
	> File Name: 1428.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月20日 星期一 16时20分00秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int num;
    int a[100];
    scanf ("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf ("%d", &a[i]);
    }

    for (int i = 0; i < num; i++) {
        int sum = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                sum++;
            }
        }
        if (i == num - 1)
            printf ("%d\n", sum);
        else 
            printf ("%d ", sum);
    }

    return 0;
}
