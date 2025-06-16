#include <stdio.h>
void printDouble(int n)
{
    int i=1;
    while (i<n)
    {
        printf("%d\n",i);
        i *=2;
    }
}
int main(void)
{
    int n;
printf(" nhập giá trị n:");
    scanf("%d",&n);
    printDouble(n);
//dọ phuc tap thoi gian  :O(log)n
    return 0;
}