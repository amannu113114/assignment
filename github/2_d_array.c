#include<stdio.h>

int main (void){
    int i , j , n ,m ;
    printf("ENTER THE VALUE OF MATRIX OF ORDER n AND m\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int aman[n][m];//intialising the 2-d array.
    //for taking the value of the element in the array aman[n][m].
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("the value of the position (%d,%d)\n", i+1,j+1);
            scanf("%d", &aman[i][j]);
        }
    printf("\n");
    }
    //printing the value of array for the output.
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("    %d  ",aman[i][j]);
        }
    printf("\n");
    }



}