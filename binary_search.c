#include <stdio.h>
#define SIZE 12

int BinarySearch(int arr[], int low , int high, int key);


int main(void)
{
    int arr[SIZE] = {1,60,10,15,18,22,31,40,55,60,70,80};

    int result = 0;

    result = BinarySearch(arr, 0, 11 , 70);

    if (result == -1)
    {
        printf("Not Found \n");
    }

    else
    {
        printf("%d\n" , result);
    }

    
    return 0;
}

int BinarySearch(int arr[], int low , int high, int key)
{
    int middle = 0;

    while (high >= low)
    {
        middle = (low + high)/2;

        if (arr[middle] == key)
        {
            return middle;
        }

        if (key < arr[middle])
        {
            high = middle - 1;
        }

        else
        {
            low = middle +1;
        }

    }


   

    return -1;

}