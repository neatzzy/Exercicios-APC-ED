#include <stdio.h>

int check(int n, int m){
    if(n == m) return 1;

    if(n < m || n % 3 != 0) return 0;

    int left = n / 3;
    int right = left * 2;

    return check(left, m) || check(right, m);
}

int main(){
    int casos;
    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++){
        int start, target;
        scanf("%d %d", &start, &target);

        check(start, target) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}