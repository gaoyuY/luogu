/*************************************************************************
	> File Name: 1036.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月10日 星期一 19时28分33秒
 ************************************************************************/

#include<stdio.h>
int flag = 0;
int a[25];
int n, k;
int is_prime(int sum) {
    if(sum == 1 || sum == 0)
        return 0;
    for (int i = 2; i * i <= sum; i++) {
        if (sum % i == 0)
            return 0;
    }
    return 1;
}


void dfs (int step, int sum, int ans) {
    if (step == n + 1 || ans == k) {
        if (is_prime(sum) && ans == k) {
            flag++;
        }
        return;
    }
    dfs (step + 1, sum + a[step], ans + 1);
    dfs (step + 1, sum, ans);
    return;
}

int main () {
    scanf ("%d%d", &n, &k);
    for (int i = 1;  i <= n; i++) {
        scanf ("%d", &a[i]);
    }
    dfs(1, 0, 0);
    printf ("%d\n", flag);

    return 0;
} 
