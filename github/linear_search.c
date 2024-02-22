#include<stdio.h>
//linear search is the way to search the element in the ascending order in any array in sequence wise.
int linear_search(int array[],int size,int target){//declaration of function for searching the target given by user.
    for(int i=0;i<size;i++){
        if(target==array[i]){
            return i;
        }
    }
    return -1;
}

int main (void){
    int size,target;
//declaration of the variable for the given purpose.
    printf("enter the size of the array -\n");
    scanf("%d", &size);
//here we get the size of array from the user.
    int array[size];
    printf("enter the element in sequence wise -\n");
//for filling the element in the array we use for loop below;
    for (int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
//for printing the element of the array we again use for loop in given below.
    printf("your given element are given below -\n");
    for(int i=0;i<size;i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
//now we have to take input of the target for searching the element in the array.
    printf("enter the element your want to search -\n");
    scanf("%d", &target);
//now we are calling the function from the above made.
    int result = linear_search(array,size,target);
//here we apply the if else statement for getting the result .
    if (result!=-1){
        printf("the position of the element in the array is - %d.\n", result+1);
    }
    else {
        printf("your element is not available in the array.\n");
    }

}//complete
