#include <stdio.h>
#define dimension 10
#define infinte 999

int matrix[dimension][dimension];

//function 1, when the user press 'A'
void receivematrix(){
    for(int k = 0;k<dimension;k++){
        for(int p=0;p<dimension;p++){
            scanf("%d", &matrix[k][p]);
            if(matrix[k][p]==0){
                matrix[k][p]=infinte;
            }
        }

    }
}

//function 2,when the user press 'b'
void istherepath(int i,int j){
    if(matrix[i][j]==infinte){
        printf("False\n");
    }
    else {
        printf("True\n");
    }


}

//function 3, when the user press 'c'


void shortestpath(){
   for(int a = 0; a<dimension ; a++){
       for(int b=0; b<dimension ; b++){
           for(int c=0;c<dimension; c++){
               if(matrix[b][a]+ matrix[a][c] < matrix[b][c]){
                   matrix[b][c]=matrix[b][a]+matrix[a][c];
               }
           }
       }
   }   
}

void printshortestpath(int i, int j){
    if(matrix[i][j]!=infinte){
        printf("-1\n");
    }
    else{
        int a = matrix[i][j];
        printf("%d\n", a);
    }
}





int main(){
   //printshortestpath(1,1);
   receivematrix();
   return 0;
   
}
