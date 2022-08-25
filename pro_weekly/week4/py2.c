#include <stdio.h>
int main() {
   int n, k;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++, k = 0) {
      for (int s = 1; s <= n - i; s++) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   return 0;
}