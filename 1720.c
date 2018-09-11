/*************************************************************************
	> File Name: 1720.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月11日 星期二 12时01分32秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main () {
    int n;
    scanf ("%d", &n);
    double Fn = (pow((1 + sqrt(5)) / 2, n) -  pow((1 - sqrt(5)) / 2, n)) / sqrt(5);

    printf ("%.2lf\n", Fn);

    return 0;
}
