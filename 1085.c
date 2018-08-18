/*************************************************************************
	> File Name: 1085.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月18日 星期六 14时56分15秒
 ************************************************************************/
#include<stdio.h>
int main () {
    int a, b;
    int max = 0;    //标记不高兴时，学习的最大时间
    int flag = 0;  //标记星期几最不高兴
    for (int i = 1; i <= 7; i++) {
        scanf ("%d%d", &a, &b);
        if (a + b > 8 && a + b > max) {
            max = a + b;
            flag = i;
        }
    }
    if (!flag) {   //如果没有不高兴，输出0
        printf ("0\n");
    }else {
        printf ("%d\n", flag);
    }

    return 0;
}
