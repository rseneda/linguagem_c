#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        float num1,
              num2;
        char oper;

        do
        {
            printf("\t\tCalculadora\n\n");

            printf("Operaçõs disponíveis\n");
            printf("'+' : soma\n");
            printf("'-' : subtração\n");
            printf("'*' : multiplição\n");
            printf("'/' : divisão\n");
            printf("'%%' : resto da divisão\n");
            printf("'Limpar': cls\n");

            printf("\nDigite a expressao na forma: Numero Operação Numero\n");
            printf("Exemplos: 1 + 1 ou  2.1 * 3.1\n");
            printf("Para sair digite: 0 0 0\n");

            scanf("%f", &num1);
            scanf("%c", &oper);
            scanf("%f", &num2);

            system("cls || clear");
            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisão por 0\n\n");
                        break;

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Sair\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

}
