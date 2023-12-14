#include <stdio.h>
int GetSet( int data[] ) {
  int i, n;
  printf( "ป้อนจำนวนสมาชิกของเซต: " );
  scanf( "%d", &n );
  for ( i = 0; i < n; i++ ) {
    printf( "ป้อนค่าสมาชิกที่ %d: ", i + 1 );
    scanf( "%d", &data[i] );
  }
  return n;
}
int main() {
  int *data, num,i;
  num = GetSet( data );
  printf( "จำนวนสมาชิกของเซต: %d\n", num );
  for ( i = 0; i < num; i++ ) {
    printf( "สมาชิกที่ :%d",  data[i] );
  }

  return 0;
}