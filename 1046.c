/*************************************************************************
	> File Name: 1046.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月19日 星期日 20时11分36秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int a[15];
    int height;
    for (int i = 0; i < 10; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &height);
    int num = 0;
    for (int i = 0; i < 10; i++) {
        if (height + 30 >= a[i])  {
            num++;
        }
    }
    

    printf ("%d\n", num);
    return 0;
}
