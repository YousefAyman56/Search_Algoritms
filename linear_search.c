#include <stdio.h>
#define SIZE 5

int LinearSearch(int arr[], int size, int key);


int main(void)
{
    int arr[SIZE] = {10,36,45,85,20};

    int result = 0;

    result = LinearSearch(arr, SIZE, 85);

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

int LinearSearch(int arr[], int size, int key)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }

    return -1;

}