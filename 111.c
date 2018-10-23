/*************************************************************************
	> File Name: 111.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年10月22日 星期一 19时54分56秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
#include<math.h>
#define INF 0x3f3f3f

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
        long long int num = 0;
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
            case '+': return (a + b);
            case '-': return (a - b);
            case '*': return a * b;
            case '^': return (int)pow(a, b);
        }
    }
    return 0;
}

int main () {
    char str[55];
    int n;
    long long int m[27][55];
    scanf ("%[^\n]s", str);getchar();
    for (int j = 0; j <= 8; j++) {
        m[0][j] = calc(str, 0, strlen(str), j);
    }
    scanf ("%d", &n);getchar();

    for (int i = 1; i <= n; i++) {
        scanf ("%[^\n]s", str);getchar();
        for (int j = 0; j <= 7; j++) {
            m[i][j] =  calc(str, 0, strlen(str), j);
            printf ("%d %d %lld\n", i, j, m[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        int a = 0;
        for (int j = 0; j <= 7; j++) {
            if (m[0][j] == m[i + 1][j]) {
                a++;
            } else break;
        }

        if (a == 8) {
            char b = 'A' + i;
            printf ("%c", b);
        }
    }

    /*for (int i = 1; i <= n; i++) {
        scanf ("%[^\n]s", str);getchar();
        int a = 0;
        for (int j = 0; j <= 8; j++) {
            m[i][j] = calc(str, 0, strlen(str), j);
            if (m[0][j] == m[i][j]) {
                a++;
            } else {
                break;
            }
        }

        if (a == 9) {
            char z = 'A' + i - 1;
            printf ("%c", z);
        }
    }*/
    return 0;
}
