#include <stdio.h>
#include <stdlib.h>

void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}

void bubblesort(int arr[], int n)
{
    
    for(int x = 0; x < n-1; x++)
    {
        int pass = 0;
        for(int y = 0; y< n-1; y++)
        {
            if(arr[y] > arr[y+1])
            {
                swap(&arr[y], &arr[y + 1]);
                pass++; 

            }

        }
        printf("pass #%d: %d\n", x+1, pass);
    }

}


int main(){

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubblesort(arr, 9);
    return 0;

}