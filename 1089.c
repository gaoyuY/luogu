/*************************************************************************
	> File Name: 1089.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 15时20分07秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int a[13];
    int stay = 0; //每个月剩的零钱
    int sum = 0; //妈妈保管的整百数
    int flag = 0; //钱不够预算的月份
    for (int i = 1; i <= 12; i++) {
        scanf ("%d", &a[i]);
        if ((300 + stay - a[i]) < 0) {
            flag = i;
            printf ("-%d\n", i);
            break;
        }
        sum += (300 + stay - a[i]) / 100;
        stay = ((300 + stay - a[i])) % 100;
    }
    if (!flag) {
        sum = (sum * 100 + sum * 100 * 0.2) + stay;
        printf ("%d\n", sum);
    }

    return 0;
}
