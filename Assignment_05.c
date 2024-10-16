//Modify Insertion sort functions to return number of passes & number of comparisons & print both in main function.

#include<stdio.h>
#define SIZE 6

int comp = 0, pass = 0;
int sort(int arr[SIZE])
{
    int j;
    for(int i = 1; i < SIZE; i++)
    {
        int temp = arr[i];
        for(j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            comp++;
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
        pass++;
    }
}

int main()
{
    int arr[SIZE] = {5,2,3,7,4,6};

    printf("Array Before Sort : \n");

    for(int i = 0; i < SIZE; i++)
    {
        printf("%4d", arr[i]);
    }

    sort(arr);

    printf("\nArray After Sort : \n");

    for(int i = 0; i < SIZE; i++)
    {
        printf("%4d",arr[i]);
    }

    printf("\nNumber of Comparisons = %d\n",comp);
    printf("Number of Passes = %d\n", pass);

    return 0;
    
}