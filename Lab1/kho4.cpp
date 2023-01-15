#include <stdio.h>
int main() {
  int row, col, i, j;
  printf("how many rows ? ");
  scanf("%d", &row);
  printf("how many col ? ");
  scanf("%d", &col);

  int *a;
  a = new int[row * col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("a[%d][%d]: ", i, j);
      scanf("%d", &a[i * col + j]);
    }
  }

  return 0;
}
