#include "biggest.h"
long long b_sum(const int* a, size_t n)
{
    long long s=0;
    for(size_t i=0; i<n; i++)
    {
        s+=a[i];
    }
    return s;
}
size_t b_maxsum_num(const int (*a)[CNT], size_t n, size_t m)
{
    long long cur_max=MININFI;
    size_t max_num;
    for(int i=0; i<n; i++)
    {
        long long x=b_sum(a[i], m);
        if(x>cur_max)
        {
            cur_max=x;
            max_num=i+1;
        }
    }
    return max_num;
}
