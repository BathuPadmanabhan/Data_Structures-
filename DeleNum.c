#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int s = sizeof(arr)/sizeof(arr[0]);
  int Delete ;
  printf("Enter a value to delete : ");
  scanf("%d",&Delete);

  int index = -1;
  for (int i = 0; i < s; i++) {
    if (arr[i] == Delete) {
      index = i;
      break;
    }
  }

 
  if (index != -1) {
    for (int i = index; i < 4; i++) {
      arr[i] = arr[i + 1];
    }
  }

  // Print the updated array.
  for (int i = 0; i < s; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}
