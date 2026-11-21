#include <stdio.h>

void convert_base(int number, int base){
    int i = 0;
    int arr[32] = {0};

    while(number > 0){
        arr[i] = number % base ; 
        number = number / base ;
        i++;
    }

     /*Loop para ler o array com os restos da divisão 
    (Dígitos convertidos para o base numérica escolhido)*/
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }

    printf("\n");
}

int main(void){
    int n,b;
    printf("Digite um número decimal e em seguida uma base numérica para conversão\n");
    scanf("%d%d", &n, &b );

    convert_base(n, b);
    return 0;
}
