#include <stdio.h>
int tong(int n)
{
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int tong2(int n)
{
    return n * (n + 1) / 2;

}
int main(void)
{
 int n;
    printf(" nhap so nguyen dương:");
    scanf("%d", &n);
    int sum1=tong(n);
    int sum2=tong2(n);

    printf(" tổng dãy:%d\n",sum1);
    printf(" tổng dãy:%d\n",sum2);

    return 0;
}