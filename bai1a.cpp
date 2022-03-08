#include <stdio.h>
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

int check_prime_number(int n){
    
    int flag = 1;

    if (n <2) return flag = 0; 
    
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break;
        }
        i++;
    }

    return flag;
}

void show_prime_number_from_array(int array[], int length){
    int prime_number[100];

    for (int i = 0; i < length; i++){
      if (check_prime_number(array[i]) == 1)  printf("%d ",array[i]);
    }
    
}
int main(void){
    int array[] = {5,6,2,8,4,11,7};
    show_prime_number_from_array(array,SIZE_OF_ARRAY(array));

    return 0;
}
