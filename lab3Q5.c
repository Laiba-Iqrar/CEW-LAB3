#include <stdio.h>
#include <stdlib.h>

int matsum(int mat1[][2], int mat2[][2], int rows , int cols){
    int *m1 = &mat1;
    int *m2 = &mat2;

    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
           mat1[i][j] += mat2[i][j];

           printf("%d", mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main(){

      int mat1[][2]= {{2,1},{1,2}};
      int mat2[][2]= {{2,1},{1,2}};
      int r= 2;
      int c = 2;
      matsum(mat1,mat2,r,c);
      return 0 ;
}
