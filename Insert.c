#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int s = sizeof(a)/sizeof(a[0]);
  int i,value ;
  printf("Enter the value : ");
  scanf("%d",&value);
  int pos ;
  printf("\nEnter the index value : ");
  scanf("%d",&pos);

  for ( i = s; i >= pos; i--) {
    a[i] = a[i - 1];
  }

  a[pos] = value;

  for ( i = 0; i < s; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");

  return 0;
}
