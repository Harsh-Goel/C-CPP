#include <stdio.h>

void merge(int a[], int mid, int l, int h)
{
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;
    int b[100];
    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= h)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    printf("Sorted arrray is :\n");
    for (i = 0; i <= h; i++)
    {
        a[i] = b[i];
        printf("%d\n", a[i]);
    }
}

void mergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, mid, l, h);
    }

}
int main()
{
    int n, a[100], i, l, h;
    printf("Enter how many numbers you want to enter\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    l = 0;
    h = n-1;
    mergesort(a, l, h);
    return 0;
}