/*************************************************************************
	> File Name: 1150.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月09日 星期日 18时14分37秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int n, k;
    scanf ("%d%d", &n, &k);
    int i = n;
    while(i >= k) {
        int  m = i / k;
        n += m;
        i = m + i % k;

    }

    printf ("%d\n", n);
    return 0;
}
