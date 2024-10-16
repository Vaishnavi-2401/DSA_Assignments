//Implement linear search using recursion.

#include<stdio.h>

int size = 5;
int linear(int arr[], int size, int key)
{
        if(size == 0)
        {
            return -1;
        }

        if(arr[size - 1] == key)
        {
            return size-1;
        }

    linear(arr, size-1, key);
}

int main()
{
    int key;
    int arr[] = {1,2,3,4,5};

    printf("Enter the key to search : \n");
    scanf("%d", &key);

    int res = linear(arr, size, key);

    if(res == -1)
    {
        printf("Element not found!\n");
    }
    else
    {
        printf("Element found at index = %d\n", res);
    }

    return 0;
    
}