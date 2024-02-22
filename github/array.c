#include<stdio.h>
int sorting(int array[]){
    int i,temp,n;
    array[n];
    
    for (i=0;i<n-1;i++)
    {
        if(array[i]>array[i+1])
        {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
        else
        {

        }
    }
    sorting(array);
    return array[n];

}

int main ()
{
    int n,i,temp;

    printf("enter the value of array. \n");//for taking the value of array.
    scanf("%d",&n);
    int arr[n];//declaring the array.
    //loop is neccesary for taking like automatic taking the element in the array.
    for (i=0;i<n;i++)
    {
        printf("enter the element at {%d} position in array\n", i);
        scanf("%d",&arr[i]);

    }
    //this loop is for printing the array element after invasion of the element.
    printf("your array elements are \n");
    for(i=0;i<n;i++)
    {
        printf(" %d   ", arr[i]);
    }

    //for arranging the element of the array .

    sorting(arr);
    printf("the element of array after sorting is\n", arr[i]);
    for(i=0;i<n;i++)
    {
        printf(" %d   ", arr[i]);
    }

    return 0;

}