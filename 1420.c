/*************************************************************************
	> File Name: 1420.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 20时59分12秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int n;
    int m[10005];
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &m[i]);
    }
    int max = 0;
    int  ans = 1;
    for (int i = 2; i <= n; i++) {
        if (m[i - 1] + 1 == m[i]) {
            ans++;
        }else {
            if (max < ans) {
                max = ans;
            }
            ans = 1;
        }
    }

    printf ("%d\n", max);

    return 0;
}
