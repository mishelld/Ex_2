#include <stdio.h>
#define dimension 10
#define infinte 999

int matrix[dimension][dimension];
int matrix2[dimension][dimension];

void shortestpath(){
    for(int a = 0; a<dimension ; a++){
       for(int b=0; b<dimension ; b++){
           for(int c=0;c<dimension; c++){
               if(b != c && matrix2[b][a]+ matrix2[a][c] < matrix2[b][c])
                   matrix2[b][c]=matrix2[b][a]+matrix2[a][c];
               
           }
       }
   }   
}


//function 1, when the user press 'A'
void receivematrix(){
    for(int k = 0;k<dimension;k++){
        for(int p=0;p<dimension;p++){
            scanf("%d", &matrix[k][p]);
            if(matrix[k][p]==0){
                matrix2[k][p]=infinte;
            }
            else{
                matrix2[k][p] = matrix[k][p];
            }
        }

    }
    shortestpath();
}

//function 2,when the user press 'b'
void istherepath(int i,int j){
    if(matrix2[i][j]==infinte){
        printf("False\n");
    }
    else {
        printf("True\n");
    }


}

//function 3, when the user press 'c'
void printshortestpath(int i, int j){
     if (matrix2[i][j] == infinte)
    {
        printf("-1\n");
    }
    else {
        printf("%d\n", matrix2[i][j]);
    }

}






