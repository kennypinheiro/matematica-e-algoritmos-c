#include <stdio.h>

void convert_base(int number, int base){
    int i = 0;
    int arr[32] = {0};

    while(number > 0){
        arr[i] = number % base ; 
        number = number / base ;
        i++;
    }

    //printf("%d ", number);
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }

    printf("\n");
}

int main(void){
    int n,b;
    printf("Type a Decimal Number and a Base to convert it\n");
    scanf("%d %d", &n, &b );

    convert_base(n, b);
    return 0;
}