#include <stdio.h>

void reverse( char str1[], char str2[] ) {
  int i, n ;
  n = strlen(str1) ;
  for (i = 0; i < n; i++) {
    str2[n - i - 1] = str1[i] ;
  }
}
int main() {

  char text[ 50 ] = "I Love You" ;
  char out[ 50 ] ;

  reverse( text, out ) ;
  
  printf( "%s\n", text ) ;
  printf( "%s\n", out ) ;

  return 0 ;
}