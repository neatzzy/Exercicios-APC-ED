#include <stdio.h>
#include <stdlib.h>

int escape(int posKing[], int posQueen[], int posTarget[]){
    int kingX, kingY, targetX, targetY;
    if(posKing[0] > posQueen[0]){
        kingX = 1;
    }
    else{
        kingX = -1;
    }
    if(posKing[1] > posQueen[1]){
        kingY = 1;
    }
    else{
        kingY = -1;
    }
    if(posTarget[0] > posQueen[0]){
        targetX = 1;
    }
    else{
        targetX = -1;
    }
    if(posTarget[1] > posQueen[1]){
        targetY = 1;
    }
    else{
        targetY = -1;
    }

    if(kingX == targetX && kingY == targetY){
        return 1;
    }
    return 0;
}

int main(){
    int size, posKing[2], posQueen[2], posTarget[2];

    scanf("%d", &size);
    scanf("%d %d", &posQueen[0], &posQueen[1]);
    scanf("%d %d", &posKing[0], &posKing[1]);
    scanf("%d %d", &posTarget[0], &posTarget[1]);

    posKing[0]--; posKing[1]--;
    posQueen[0]--; posQueen[1]--;
    posTarget[0]--; posTarget[1]--;
    
    escape(posKing, posQueen, posTarget) ? printf("YES\n") : printf("NO\n");

    return 0;
}