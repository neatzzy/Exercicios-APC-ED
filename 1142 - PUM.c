#include <stdio.h>
 
int main() {
    int n, idx, cont = 1;

    scanf("%d", &n);

    for(idx = 0 ; idx < n ; idx++){
        printf("%d %d %d PUM\n", cont, cont+1, cont+2);
        cont += 4;
    }
    return 0;
}