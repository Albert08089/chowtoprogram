#include <stdio.h>

int indexOf(int arr[], int size, int value)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[20];
    int i;
    printf("Enter 20 numbers: ");
    for (i = 0; i < 20; ++i)
    {
        scanf("%d", arr + i);
    }
    // display numbers here
    printf("You entered: ");
    for (i = 0; i < 20; ++i)
    {
        if (indexOf(arr, i - 1, arr[i]) == -1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}