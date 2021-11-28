#include <stdio.h>
#include "my_mat.h"
void main(){
    char input;
    scanf("%c", &input);
    while(input != 'D'){
        if(input=='A'){
            receivematrix();
        }
        else if(input=='B'){
            int i, j;
            scanf("%d %d", &i, &j);
            istherepath(int i,int j);

        }
        else if(input=='C'){
             int i, j;
            scanf("%d %d", &i, &j);
            printshortestpath(int i, int j);
        }

        else if(input=='D'){
        break;
        }
    }

}