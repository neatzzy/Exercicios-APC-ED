#include <stdio.h>

int main(){
    int cv, ce, cs, fv, fe, fs, pc, pf;

    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    pc = (3*cv) + ce;
    pf = (3*fv) + fe;

    if (pc > pf){
        printf("C\n");
    }
    else if (pf > pc){
        printf("F\n");
    }
    else if (pf == pc){
        if (cs > fs){
            printf("C\n");
        }
        else if (fs > cs){
            printf("F\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;

}