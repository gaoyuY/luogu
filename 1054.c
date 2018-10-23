/*************************************************************************
	> File Name: 1054.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年10月21日 星期日 19时15分08秒
 ************************************************************************/


#include<stdio.h>
#include<string.h>
#include<math.h>
#define INF 0x3f3f3f3f
#define mod 100000007

long long int pow_mod(long long int a, long long int b) {
    long long ans = 1;
    for (int i = 1; i <= b; i++) {
        ans = ans * a % mod;
    }
    return ans;
}

long long int calc (const char *str, int l, int r, int a_value) {
    int pos = -1, temp_prior = 0, prior = INF - 1;
    for (int i = l; i <= r; i++) {
        int cur_prior = INF;
        switch (str[i]) {
            case '(': temp_prior += 100; break;
            case ')':  temp_prior -= 100; break;
            case '+': cur_prior = temp_prior + 1;break;
            case '-': cur_prior = temp_prior + 1;break;
            case '*': cur_prior = temp_prior + 2; break;
            case '^': cur_prior = temp_prior + 3; break;
        }
        if (cur_prior <= prior) {
            prior = cur_prior;
            pos = i;
        }
    }
    if (pos == -1) {
        int num = 0;
        for (int i = l; i <= r; i++) {
            if (str[i] == 'a') return a_value;
            if (str[i] < '0' || str[i] > '9') continue;
            num = num * 10 + str[i] - '0';
        }
        return num;
    } else {
        long long int a = calc(str, l, pos - 1, a_value);
        long long int b = calc(str, pos + 1, r, a_value);
        switch (str[pos]) {
            case '+': return (a + b) % mod;
            case '-': return (a - b) % mod;
            case '*': return (a * b) % mod;
            case '^': return pow_mod(a, b);
        }
    }
    return 0;
}

int main () {
    char str[1000];
    int n;
    long long int m[27][10];
    scanf ("%[^\r]s", str);getchar();
    for (int j = 1; j <= 5; j++)
        m[0][j] = calc(str, 0, strlen(str), j);
    scanf ("%d", &n);getchar();
    for (int i = 1; i <= n; i++) {
        scanf ("%[^\r]s", str);getchar();
        for (int j = 1; j <= 5; j++) {
            m[i][j]=  calc(str, 0, strlen(str), j); 
        }
    }
    int flag;
    for (int i = 1; i <= n; i++) {
        flag = 0;
        for (int j = 1; j <= 5; j++) {
            if (m[0][j] == m[i][j]) {
                continue;
            } else {
                flag++;
                break;
            }
        }
        if (!flag) {
            printf ("%c", 'A' + i - 1);
        }
    }
    return 0;
}
