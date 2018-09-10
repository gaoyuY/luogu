/*************************************************************************
	> File Name: 1615.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年09月09日 星期日 18时30分22秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int h1, m1, s1;
    int h2, m2, s2;
    long long int sum;
    int num;
    scanf ("%d:%d:%d", &h1, &m1, &s1);
    scanf ("%d:%d:%d", &h2, &m2, &s2);
    scanf ("%d", &num);
    long long int s3, m3, h3;
    if (s2 < s1) {
        if (m2 < m1) {
            s3 = s2 + 60 - s1;
            h2 -= 1;
            m2 += 59;
        }else {
            s3 = s2 + 60 - s1;
            m2 -= 1;
        }
    }else {
        s3 = s2 - s1;
    }

    if (m2 < m1) {
        m3 = (m2 + 60 -m1) * 60;
        h2 -= 1;
    }else {
        m3 = (m2 - m1) * 60;
    }

    h3 = (h2 - h1) * 3600;
    sum  = (h3 + m3 + s3) * num;
    printf ("%lld\n", sum);
    return 0;
}
