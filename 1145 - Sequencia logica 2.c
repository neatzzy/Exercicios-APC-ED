#include <stdio.h>

int main(){
    int x , y, idx;

	scanf("%d %d", &x, &y);

	for(idx = 1; idx <= y; idx++){
		printf("%d", idx);
		if (idx % x == 0)
			printf("\n");
		else
			printf(" ");
}
return 0;
}