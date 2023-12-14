#include <stdio.h>
int GetSet( int data[] ) {
  int i, n;
  printf( "Setnum: " );
  scanf( "%d", &n );
  for ( i = 0; i < n; i++ ) {
    printf( "set %d: ", i + 1 );
    scanf( "%d", &data[i] );
  }
  return n;
}
int main() {
  int *data, num,i;
  num = GetSet( data );
  printf( "Member: %d\n", num );
  for ( i = 0; i < num; i++ ) {
    printf( "Number :%d",  data[i] );
  }

  return 0;
}
