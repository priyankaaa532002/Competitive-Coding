#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i = 0, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int a[], int n)
{
    int i, j, pos, swap;
    for (i = 0; i < (n - 1); i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
                pos = j;
        }
        if (pos != i)
        {
            swap = a[i];
            a[i] = a[pos];
            a[pos] = swap;
        }
    }
}
int main()
{
    int a[100], n, i, d, swap;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    //BUBBLE
    bubble_sort(a, n);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    //SELECTION
    selection_sort(a, n);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}