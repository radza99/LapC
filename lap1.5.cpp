#include <stdio.h>
void GetMatrix(int *value, int *row, int *col) {
  int i, j, m, n;
  printf("Number rows: ");
  scanf("%d", &m);
  printf("MainMatrix: ");
  scanf("%d", &n);
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("Set (%d, %d): ", i + 1, j + 1);
      scanf("%d", &value[i * n + j]);
    }
  }
  *row = m;
  *col = n;
}
int main() {
  int *data, m, n, i, j;
  GetMatrix(data, &m, &n);
  printf("rowsmatrix: %d\n", m);
  printf("MainMatrix: %d\n", n);
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("Set (%d, %d): %d\n", i + 1, j + 1, data[i * n + j]);
    }
  }
  return 0;
}
