#include <stdio.h>
int partition(int a[], int low, int high)
{
     
    int pivot = a[low];
    int i= low ;
    int j = high ;

    while(i<j)
    {
        while(a[i] <= pivot && i < high)
            i++;
            
        while(a[j] > pivot)
            j--;
            
        if(i<j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[low] = a[j];
    a[j] = pivot;
    return j;

}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi-1);
        quickSort(a, pi+1, high);
    }

}

void main()
{
    int arr[5] = {10, 13, 6, 35, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    
    printf("Sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

}