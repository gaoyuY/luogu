/*************************************************************************
	> File Name: 1200.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月23日 星期四 14时54分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char str[27] = {' ','A', 'B', 'C', 'D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int func(char *x) {
    int sum = 1;
    int m = strlen(x);
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < 27; j++) {
            if (x[i] != str[j]) continue;
            sum *= j;
            break;
        }
    }    
    sum %= 47;
    return sum;
}

int main () {
    char a[7];
    char b[7];
    scanf ("%s", a);
    scanf ("%s", b);
    if (func(a) == func(b))
        printf ("GO");
    else
        printf ("STAY");

    return 0;
}
