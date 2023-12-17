#include <stdio.h>
#include <stdlib.h>  
void GetSet(int **data, int *num) {
    int i, n;
    printf("Setnumber: ");
    scanf("%d", &n);
    *data = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Set%d: ", i + 1);
        scanf("%d", &(*data)[i]);
    }
    *num = n;
}
int main() {
    int *data, num, i;
    GetSet(&data, &num);
    printf("Set : %d\n", num);
    for (i = 0; i < num; i++) {
        printf("set:%d   ", i + 1, data[i]);
    }
    
    free(data);
    return 0;
}
