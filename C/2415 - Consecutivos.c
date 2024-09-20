#include <stdio.h>

int main(){
    int n, idx, vlr, mem = 0, pts = 1, maiorseq = 0;

    scanf("%d", &n);

    for(idx = 0 ; idx < n ; idx++){
        scanf("%d", &vlr);
        if(vlr == mem){
            pts++;
        }
        if (pts >= maiorseq)
        {
            maiorseq = pts;
        }
        
        if (vlr != mem){
            
            pts = 1;
        }
        mem = vlr;
    }
    printf("%d\n", maiorseq);
    return 0;
}