/*************************************************************************
	> File Name: 1554.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月09日 星期日 15时25分36秒
 ************************************************************************/

#include<stdio.h>
int sum[11] ={0};
void func(int a) {
    while (a) {
        sum[a%10]++;
        a/=10;
    }
}
int main () {
    int m, n;
    scanf ("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        func(i);
    }

    for (int i = 0; i <= 9; i++) {
        if (i == 9) 
            printf ("%d",sum[i]);
        else
            printf ("%d ", sum[i]);
    }

    return 0;
}
