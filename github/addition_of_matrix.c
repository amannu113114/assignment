#include<stdio.h>

int main (void){

    int i , j , n ,m ;
    printf("ENTER THE VALUE OF MATRIX OF ORDER n AND m\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int aman[n][m];
    int ankit[n][m];//intialising the 2-d array.

    //for taking the value of the element in the array aman[n][m].
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("the value of the position in first matrix- (%d,%d)\n", i+1,j+1);
            scanf("%d", &aman[i][j]);
        }
    printf("\n\n");
    }

    

    //initiaslising the 2nd matrix.
    
    
    ankit[n][m];//intialising the 2-d array.
    //for taking the value of the element in the array aman[n][m].
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("the value of the position in second matrix- (%d,%d)\n", i+1,j+1);
            scanf("%d", &ankit[i][j]);
        }
    printf("\n\n");
    }

    //printing the value of array for the output.
    printf("YOUR FIRST MATRIX IS-\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("  %d  ",aman[i][j]);
        }
    printf("\n\n");
    }

    //printing the value of array for the output.
    printf("YOUR SECOND MATRIX IS-\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("  %d  ",ankit[i][j]);
        }
    printf("\n\n");
    }

    //now adding the matrix.
    int sum[n][m];//declaring an another matrix of sum of these two matrix.

    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum[i][j] = (aman[i][j]+ankit[i][j]);
        }

    }

    //printing the value of array for the output of sum of these matrix.
    printf("THE SUM OF YOUR MATRICES IS-\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("  %d  ",sum[i][j]);
        }
    printf("\n\n");
    }



}