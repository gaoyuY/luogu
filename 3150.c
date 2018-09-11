/*************************************************************************
	> File Name: 3150.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月11日 星期二 12时15分17秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int n, m;
    scanf ("%d", &m);
    while (m--) {

        scanf ("%d", &n);
        if (n % 2 == 0) {
            printf ("pb wins\n");
        }else {
            printf ("zs wins\n");
        }
    }
    return 0;
}
