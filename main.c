#include <stdio.h>
#include <stdlib.h>
#include "biggest.h"
int main()
{
   int n, m;
    int a[CNT][CNT];
     printf("Write length and width\n");
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
    {
        printf("Write %d numbers\n", m);
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x=b_maxsum_num(a, n, m);
    printf("%d\n", x);
    return 0;
}
