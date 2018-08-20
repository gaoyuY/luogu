/*************************************************************************
	> File Name: 1047.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月19日 星期日 20时17分56秒
 ************************************************************************/

#include<stdio.h>
int main () {
    
    int l, num;
    int m, n;
    int sum = 0;
    int b[10005] = {0};
    scanf ("%d%d", &l, &num);
    while (num--) {
        scanf ("%d%d", &m, &n);
        for (int i = m; i <= n; i++) {
            if (b[i] == 0) {
                sum++;
                b[i] = 1;
            }
        }
    }    
    
    sum = l - sum + 1;
    
    printf ("%d\n", sum);
    return 0;
}
