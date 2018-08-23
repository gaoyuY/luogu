/*************************************************************************
	> File Name: 4325.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 19时23分19秒
 ************************************************************************/

#include<stdio.h>
int a[45] = {0};
int main () {
    int n;
    for (int i = 0; i < 10; i++) {
        scanf ("%d", &n);
        a[n % 42]++;
    }
    int sum = 0;
    for (int i = 0; i < 42; i++) {
        if (a[i] != 0) 
            sum++;
    }
    printf ("%d\n", sum);


    return 0;
}
