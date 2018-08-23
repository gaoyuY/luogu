/*************************************************************************
	> File Name: 2911.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 19时03分06秒
 ************************************************************************/

#include<stdio.h>
int a[85] = {0};
int main () {
    int s1, s2, s3;
    scanf ("%d%d%d", &s1, &s2, &s3);
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                a[i + j + k]++;
            }
        }
    }
    int max = 0;
    int n;
    for (int i = 3; i < s1 + s2 + s3; i++) {
        if (max < a[i]) {
            max = a[i];
            n = i;
        }
    }

    printf ("%d\n", n);

    return 0;
}
