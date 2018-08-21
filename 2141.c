/*************************************************************************
> File Name: 2141.c
> Author:gaoyu
> Mail:2282940822 
> Created Time: 2018年08月20日 星期一 16时29分42秒
************************************************************************/
#include<stdio.h>
int main()
{
    int n, c, d, sum = 0;
    scanf ("%d", &n);
    int a[105], b[105];
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d", &a[i]); 
        b[i] = a[i];

    }
    for(int i = 1; i <= n-1; ++i)
    { 
        for(int j = i + 1; j <= n; ++j)
        {   
            for(int k = 1; k <= n; ++k)
            {
                if( b[k] == a[i] + a[j]) 
                {
                    sum++; 
                    b[k] = 0; 
                }
            } 
        }
    }
    printf ("%d\n", sum); 
    return 0; 
}
