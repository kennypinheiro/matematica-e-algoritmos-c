#include <stdio.h>

int main(void){
    int n = 109, i = 0;;
    int arr[32] = {0};

    while(n > 0){
        arr[i] = n % 2 ;               //Converter para qualquer base -> 2 -> b
        n = n / 2 ;
        i++;
    }

    printf("%d ", n);
    for(int j = i-1; j >= 0; j--){
        printf("%d ", arr[j]);
    }

    printf("\n");
    return 0;
}