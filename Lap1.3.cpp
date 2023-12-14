#include <stdio.h>
int *GetSet( int *num ) {
    int i, n, data[100];
    printf("Setnum:");
    scanf("%d",&n);
    for(i =0;i <n;i++){
        printf("Set:");
        scanf("%d",&data[i],i + 1);

    }
    return data;
}

int main() {
int *data, num,i ;
data = GetSet( &num );
printf("ค่า%d\n",num);
for(i=0;i< num; i++){
    printf("ค่า:%d \n ", i+1,data[i]);
}

return 0 ;
}//end function