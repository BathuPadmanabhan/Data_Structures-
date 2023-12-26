
#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int s = sizeof(arr)/sizeof(arr[0]);
  int Delete,i ;
  printf("Enter a value to delete : ");
  scanf("%d",&Delete);
  printf("\nbefore : ");
  int index = -1;
  for (i = 0; i < s; i++) {
  	printf("%d ",arr[i]);
    if (arr[i] == Delete) {
      index = i;
      break;
    }
  }
  printf("\n");


  if (index != -1) {
    for (i = index; i < 4; i++) {
      arr[i] = arr[i + 1];
    }
  }


  for (i = 0; i < s; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}
