#include <stdio.h>

char* reverse( char str1[]) {
  int i, n ;
  n = strlen(str1) ;
  
  for (i = 0; i < n / 2;i++) {
    char A = str1[i] ;
    str1[i] = str1[n - i - 1] ;
    str1[n - i - 1] = A ;
  }

  return str1 ;
}
int main() {

  char text[ 50 ] = "I Love You\n Hello Wordl";
  char *out ;
  out = reverse( text ) ;
  
  printf( "I Love You\n") ;
  printf( "Hello Wordl\n") ;
  printf( "\n") ;
  printf( "%s\n", out ) ;
  

  return 0 ;
}