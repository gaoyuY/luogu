/*************************************************************************
	> File Name: 1029.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月16日 星期四 14时41分21秒
 ************************************************************************/

#include<stdio.h>
int gcd(int x, int y) {
    if (!y) return x;
    return gcd(y, x % y);
}
int  main () {
    int x, y;
    int sum = 0;
    scanf ("%d%d", &x, &y);
    for (int i = 1; i * i <= x * y; i++) {
        if ((x * y) % i == 0) {                  //两个数的最小公倍数与最大公约数的乘积等于这两个数的乘积
            if ((gcd(i, (x * y) / i) == x)) {
                sum++;
            }
        }
    }
    printf ("%d\n", sum * 2);        //因为少遍历一遍，所以*2

    return 0;
}
