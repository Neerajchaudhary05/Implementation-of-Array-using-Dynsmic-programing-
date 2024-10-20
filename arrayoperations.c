// 1.implementation of array using structure
/*#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct myarray
{
   int total_size;
   int used_size;
   int *ptr;
};

void createarray(struct myarray *p , int tsize, int usize)
{
   p->total_size = tsize;
   p->used_size = usize;
   p->ptr = (int *)malloc(tsize * sizeof(int));
}
void showarr(struct myarray *p){
   for (int i = 0; i < p->used_size; i++)
   {
      printf("%d\n",(p->ptr)[i]);
   }

}
void setarr(struct myarray *p){
   for (int i = 0; i < p->used_size; i++)
   {
      printf("enter the value at the index number %d:",i);
      scanf("%d",&((p->ptr)[i]));
   }

}
int main()
{
   struct myarray marks;
   createarray(&marks, 15, 5);
   setarr(&marks);
   showarr(&marks);
   return 0;
}
*/
/*
// 2.insertion operation in an array at a perticular index
#include <stdio.h>
#include <conio.h>


// traversal of array
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("the element at the index number %d is:%d\n", i, arr[i]);
    }
}


// insertion process in array
int indinsertion(int arr[], int used_size, int index, int tsize, int element)
{
    if (used_size >= tsize)
    {
        printf("insertion is failed!");
        return -1;
    }
    else if (used_size<tsize)
    {
    printf("\n\ninsertion completed successfully!\n");

    for (int i = tsize - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    printf("\n\narray after the insertion:\n");
    display(arr,7);
    return 1;
    }
}

int main()
{
    int arr[50] = {3, 45, 23, 45, 67, 5};
    int index = 3, element = 18, size = 6;
    display(arr,size);
    indinsertion(arr, size, index, 100, element);

    return 0;
}
*/
/*
// deleton opration in an arrray
#include <stdio.h>
#include <conio.h>

void display(int arr[], int size)
{
    // traversal of array
    for (int i = 0; i < size; i++)
    {
        printf("the element at the index number %d is :%d\n", i, arr[i]);
    }
}

int deletion(int arr[], int size, int index, int tsize)
{
    if (size >= tsize)
    {
        printf("the deletion process failed!");
        return -1;dx
    }
    else if (size < tsize)
    {
        printf("the deletion process is success!");
        for (int i = 0; i < size; i++)
        {
            if (i == index)
            {
                ///deletion of a element
                arr[i] = NULL;
            }
        }
        //shifting of index
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("\n\nthe array after the deletion is :\n");
        display(arr, size - 1);
    }
}

int main()
{
    int arr[50] = {5, 8, 46, 4, 5};
    int size = 5;
    display(arr, 5);
    int index = 2, tsize = 50;
    deletion(arr, size, index, tsize);

    return 0;
}
*/

// linear and binary search in an array
#include <stdio.h>
#include <conio.h>

int linearsearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// binary search in a sorted array
int binarysearch(int arr[], int size, int element)
{
    int mid, low, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            // printf("element is %d is at the index no %d", element, mid);
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
    };
    return -1;
}

int main()
{
    // unsorted array for linear search
    //    int arr[]={4,6,7,8,5,9,3};
    //    int element=9;
    //    int size=sizeof(arr)/sizeof(int);
    //    int searchindex=linearsearch(arr,size,element);
    //    printf("the element %d is at the index no. %d \n",element,searchindex);

    // sorted array for binary search
    int arr[] = {4, 6, 7, 18, 25, 29, 33};
    int element = 4;
    int size = sizeof(arr) / sizeof(int);
    int searchindex = binarysearch(arr, size, element);
    printf("the element %d is at the index no. %d \n", element, searchindex);

    return 0;
}