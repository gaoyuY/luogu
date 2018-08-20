/*************************************************************************
	> File Name: 1427.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月19日 星期日 20时50分39秒
 ************************************************************************/

#include<stdio.h>
int main () {
    
    int a[105];
    int num;
    for (int i = 0; ; i++) {
        scanf ("%d", &a[i]);
        if (a[i] == 0) {
            num = i - 1;
            break;
        } 
    }
    
    for (int i = num; i >= 0; i--) {
        if (i == 0) {
            printf ("%d\n", a[i]);
        }else {
            printf ("%d ", a[i]);
        }
    }
    return 0;
}
