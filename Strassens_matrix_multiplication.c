//2*2 matrix using Strassen's 7 formulae
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[2][2], B[2][2], C[2][2];
   int i,j;
   int T1, T2, T3, T4, T5, T6, T7;
   int n;
   printf("Enter size of matrix : ");
   scanf("%d", &n);
   //for matrix A
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        printf("Enter element A%d%d : ",i,j);
        scanf("%d",&A[i][j]);
    }
   }

   //for matrix B
   printf("\n");
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        printf("Enter element B%d%d : ",i,j);
        scanf("%d",&B[i][j]);
    }
   }

   //print matrix A
   printf("\nMatrix A is :\n");
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
   }

   //print matrix B
   printf("\nMatrix B is :\n");
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
   }

   //Declare formulae
   T1 = ((A[1][1] + A[2][2]) * (B[1][1] + B[2][2]));
   T2 = (B[1][1] * (A[2][1] + A[2][2]));
   T3 = (A[1][1] * (B[1][2] - B[2][2]));
   T4 = (A[2][2] * (B[2][1] - B[1][1]));
   T5 = (B[2][2] * (A[1][1] + A[1][2]));
   T6 = ((B[1][1] + B[1][2]) * (A[2][1] - A[1][1]));
   T7 = ((B[2][1] + B[2][2]) * (A[1][2] - A[2][2]));


   C[0][0] = T1 + T4 - T5 + T7;
   C[0][1] = T3 + T5;
   C[1][0] = T2 + T4;
   C[1][1] = T1 + T3 - T2 + T6;


   //for matrix C
   /*
   printf("\n");
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i == 0 && j == 0){
            C[i][j] = (T1 + T4 - T5 + T7);
        }else if(i == 0 && j == 1){
            C[i][j] = (T3 + T5);
        }else if(i == 1 && j == 0){
            C[i][j] = (T2 + T4);
        }else{
            C[i][j] = (T1 + T3 - T2 + T6);
        }
    }
   }*/


   //print matrix C
   printf("\nMatrix C is :\n");
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         printf("%d ",C[i][j]);
    }
    printf("\n");
   }

   return 0;
}


//Output:
Enter size of matrix : 2
Enter element A11 : 4
Enter element A12 : 2
Enter element A21 : 8
Enter element A22 : 5

Enter element B11 : 1
Enter element B12 : 5
Enter element B21 : 7
Enter element B22 : 3

Matrix A is :
4 2
8 5

Matrix B is :
1 5
7 3

Matrix C is :
18 26
43 55

