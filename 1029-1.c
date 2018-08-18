/*************************************************************************
> File Name: 1029.c
> Author: 
> Mail: 
> Created Time: 2018年08月16日 星期四 15时10分56秒
************************************************************************/
#include<stdio.h>
int gcd(int x,int y)
{
    if(!y)    return x;
    return gcd(y, x % y);
}
int main()
{
    int m, n;
    int ans = 0;
    scanf ("%d%d", &n, &m);
    for (int i = 1; i * 2 <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
            if (gcd(i, j) == n && ((i * j) / gcd(i, j) == m)) {
                ans++;
            }
        }
    }
    printf ("%d\n", ans * 2);
    return 0;

}
