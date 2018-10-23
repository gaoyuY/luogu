/*************************************************************************
	> File Name: 1981-1.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年10月21日 星期日 16时38分01秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 1500000

int calc (char *str) {
    int len = strlen(str);
    for (int i = 0; str[i]; i++) 
        str[i] = (str[i] == '+'? 0 : str[i]);
    int total = 0;
    for (int j = 0; j < len; j += strlen(str + j) + 1) {
        int num = 0, p = 1;
        for (int i = j; str[i]; i++) {
            switch (str[i]) {
                case '*': p *= num; p %= 10000; num = 0; break; 
                default : num = num * 10 + str[i] - '0';
            }
        }
        p *= num;
        p %= 10000;
        total += p;
        total %= 10000;
    }
    return total;
}

int main () {
   
    char str[MAX_N] = {0};
    scanf ("%s", str); 
    printf ("%d\n", calc(str));
     
    return 0;
}
