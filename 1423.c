/*************************************************************************
	> File Name: 1423.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 17时23分11秒
 ************************************************************************/

#include<stdio.h>
int main () {
    double sum = 2;
    int flag = 0;
    double ans = 2;
    double m;
    scanf ("%lf", &m);
    for (int i = 2;;i++) {
        if (sum >= m) {
            flag = i - 1;
            break;
        }
        ans *= 0.98; 
        sum += ans;
    }
    printf ("%d\n", flag);

    return 0;
}
