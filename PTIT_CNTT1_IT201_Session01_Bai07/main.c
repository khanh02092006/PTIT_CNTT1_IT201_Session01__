#include <stdio.h>
int trunglapmang(int arr[] ,int n)
{
    for (int i =0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]== arr[j]) return 1;

            }
        }
    return 0;
}
int trunglap2(int arr[] ,int n)
{
    int kep[1001]=0;
    for (int i =0;i<n-1;i++)
    {
        if (kep[arr[i]==1]) return 1;
        kep[arr[i]]=1;
    }
    return 0;
}
int main(void)
{
    int n;
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++)
    {
        printf(" nhap phan tu thu %d\n",i+1);
        scanf("%d",&arr[i]);

    }
    if (trunglapmang(arr,n))
    {
        printf(" c1:có phân tư trung lap");

    } else
    {
        printf(" c1: không có phần tử trùng lặp ")
    }
    if (trunglap2(arr,n))
    {
        printf("c2 : có phần tử trùng lặp ")
    } else
    {
        printf("c2: không c phần tử trùng lặp ")
    }
    // c1 phức tạp tg 0(n2) không gian o(1)
    //c2 đọ phuc ttap 0(n) khong gian o(1)


    return 0;
}