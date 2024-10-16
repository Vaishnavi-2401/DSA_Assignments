//Modify bubble sort functions to return number of passes & number of comparisons & print both in main function.

#include<stdio.h>
#define SIZE 5

int comp = 0, pass = 0;
int bubble(int arr[SIZE])
{
    int temp;
    for(int i = 0; i < SIZE-1; i++)
    {
        for(int j = 0; j < SIZE-1-i; j++)
        {
             if(arr[j] > arr[j+1])
            {
                comp++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass++;
    }
}

int main()
{
    int arr[SIZE] = {5,4,3,2,1};
    bubble(arr);
    for(int i = 0; i < SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
    printf("\nNumber of Comparisons = %d\n",comp);
    printf("Number of Passes = %d\n", pass);

    return 0;

}