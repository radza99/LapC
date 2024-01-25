#include <stdio.h>
#include <string.h>
void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = 0;
    
    for (i = 0; str1[i] ;) {
        if (str1[i] == splitter) {
            str2[j][k] ;
            j++;
            k = 0;
            
        } else {
            str2[j][k] = str1[i];
            k++;
        }
        i++;
    }
    str2[j][k] ;
    *count = j + 1;
}
int main() {
    char out[20][10];
    int num;
    explode("I/Love/You", '/', out, &num);
    // แสดงผลลัพธ์
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    printf("count = %d\n", num);
    return 0;
}
