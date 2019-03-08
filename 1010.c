#include <stdio.h>

int main()
{
    int codigoEntrada, quantidadeEntrada;
    float precoEntrada, valor;
    printf("Por favor, entre com o codigo do primeiro produto, em seguida, sua quantidade e o preco por unidade: \n");
    scanf("%d %d %f", &codigoEntrada,  &quantidadeEntrada, &precoEntrada);
    
    valor = (float)quantidadeEntrada * precoEntrada;
    
    printf("\nAgora, faça o mesmo para o segundo produto: \n");
    scanf("%d %d %f", &codigoEntrada,  &quantidadeEntrada, &precoEntrada);
    
    valor = valor + ( (float)quantidadeEntrada * precoEntrada );
    
    
    printf("\n");
    printf("VALOR A PAGAR: R$ %.2f", valor);
    
    return 0;
}
