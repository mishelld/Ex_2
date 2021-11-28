#include <stdio.h>
#include "my_mat.h"
int main(){
    char input;
    scanf("%c", &input);
    while(input != 'D'){
        if(input=='A'){
            receivematrix();
        }
        else if(input=='B'){
            int i, j;
            scanf("%d %d", &i, &j);
            istherepath(i,j);

        }
        else if(input=='C'){
             int i, j;
            scanf("%d %d", &i, &j);
            printshortestpath(i,j);
        }

        else if(input=='D'){
        break;
        }
    }
    return 0;

}