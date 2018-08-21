/*************************************************************************
	> File Name: 1055.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年08月20日 星期一 20时20分30秒
 ************************************************************************/

#include<stdio.h>
int main () {
    char a[15];
    for (int i = 1; i < 14; i++)
        scanf ("%c", &a[i]);
    int sum = 0;
    int ans=0;
    for (int i = 1, j = 1; i < 13, j < 10; i++, j++) {
        if (a[i] == '-'){
            j--;
            continue;
        }
        sum += (a[i] - '0') * j;
        
    }
    sum %= 11;
    if (sum == 10){
        if (a[13] == 'X') 
            printf("Right");
        else {
            for (int i = 1;i < 14; i++) {
                if (i == 13) {
                    printf ("X");
                }else
                    printf("%c", a[i]);
            }
        }
    }else {
        if (sum == a[13] - '0') {
            printf ("Right");
        }else {
            for (int i = 1; i < 14; i++) {
                if(i == 13) 
                    printf ("%d", sum);
                else
                    printf ("%c", a[i]);
            }
        }
    }
    return 0;
}
