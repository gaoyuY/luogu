/*************************************************************************
	> File Name: 1422.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月18日 星期六 15时50分25秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int num;
    double sum = 0;
    scanf ("%d", &num);
    
    if (num <= 150) {
        sum = num * 0.4463;
    }else if (num > 150 && num <= 400) {
        sum = (num - 150) * 0.4663 + 150 * 0.4463; 
    }else {
        sum = (num - 400) * 0.5663 + (400 - 150) * 0.4663 + 150 * 0.4463;
    }
    printf ("%.1lf\n", sum);

    return 0;
}
