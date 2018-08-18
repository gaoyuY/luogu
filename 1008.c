/*************************************************************************
	> File Name: 1008.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 16时42分11秒
 ************************************************************************/

#include<stdio.h>
int is_num(int *flag, int m) {
    while (m) {        //判断是不是全数字（不包括零）
        if (m % 10 == 0 )  return 0;
        if (flag[m % 10] == 1) return 0;
        flag[m % 10] = 1;
        m /= 10;
    }
    return 1;
}
int func(int x, int y, int z) {
    int flag[10] = {0};  //数组初始化，0表示没出现过
    if (!is_num(flag, x)) return 0; 
    if (!is_num(flag, y)) return 0;
    if (!is_num(flag, z)) return 0;
    return 1;
}
int main () {
    for (int i = 123; i * 3 <= 987; i++) {
        if (func(i, i * 2, i * 3)) 
            printf ("%d %d %d\n", i, i * 2, i * 3);
    }

    return 0;
}
