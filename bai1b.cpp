#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
void sapXepGiamDan(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}
int compareIntDesc(const void* a, const void* b){
    int aNum = *(int*)a;
    int bNum = *(int*)b;

    return bNum - aNum;
}
int main(void){
    int A[] = {5,6,2,8,4,11};
    qsort(A, SIZE_OF_ARRAY(A), sizeof(int), compareIntDesc);
    sapXepGiamDan(A, SIZE_OF_ARRAY(A));
    return 0;
}
