#include <stdio.h>

int main(void)
{

    return 0;
}
int mallocArray(int n) {
    int arr = (int*)malloc(n* sizeof(int));
    for (int i=0; i<n; i++) {
        arr[i] = i;
    }
    return arr;
}
// do phuc tap khoong gian o(n)