#include <stdio.h>

void convert_base(int number, int base){
    int arr[32] = {0};
    int tmp;

    for(int i = 0; number > 0; i++){
        arr[i] = number % base;
        number = number / base;
        tmp = i;
    }

    /*Loop para ler o array com os restos da divisão 
    (Dígitos convertidos para o base numérica escolhido)*/
    for(int i = tmp; i>=0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

int main(void){
    int n,b;
    printf("Digite um número decimal e em seguida uma base numérica para conversão\n");
    scanf("%d%d", &n, &b);

    convert_base(n, b);   
    return 0;
}
