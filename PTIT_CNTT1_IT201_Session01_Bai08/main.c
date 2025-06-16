#include <stdio.h>
int timphantuxuathiennhieu(int arr[] , int n )
{
    int kep[1001]={0};
    for (int i=0;i<n;i++)
    {
        kep[arr[i]]++;
    }
    int sum=0;
    int max=0;
    for (int i=0;i<=1000;i++)
    {
        if(kep[i]> sum){
            kep[i]=sum ;
            max=i;

        }

    }
    return max;
}
int main(void)
{
int n;
    printf(" nhập số phần tử của mảng");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf(" nhập phần tử thứ %d ",i+1);
        scanf("%d",&arr[i]);

    }
int ketqua=timphantuxuathiennhieu(arr,n);
    printf("phantuw xuat hien nhieu nhat%d\n ",ketqua);
    return 0;
    // Độ phức tạp không gian :0(1)
    // Độ phức tạp thời gian:
    // Best case:    O(n)
    // Average case: O(n^2)
    // Worst case:   O(n^2)
}
