#include <stdio.h>
int sort(int arr[] , int n)
{
    for (int i=0;i<n -1;i++)
    {
        int check=0;
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                check =1;
            }
        }
        if ( check==0) break;
    }
}
int print(int arr[] , int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
int n;
    printf(" nhập số phần tử vào mảng ");
    scanf("%d",&n);
    int arr[n];
    printf(" nhập %d phần tử :\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf(" mảng ban đầu ");
    print(arr,n);
    sort(arr,n);
    printf(" mang sau khi sap xep ");

    print(arr,n);
//do phuc tap tg  :O(n²)
    return 0;
}