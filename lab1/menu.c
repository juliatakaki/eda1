#include <stdio.h>

int main(){
     float a, b, res;
     char op;

     do{
          printf("Digite dois numeros: \n");
          scanf("%f %f", &a, &b);

          while ((getchar()) != '\n');

          printf("Digite um operador: \n");
          scanf("%c", &op);

          switch (op){
               case '+': 
                    res = a+b;
                    break;

               case '-': 
                    res = a-b;
                    break;

               case '*':
                    res = a*b;
                    break;

               case '/': 
                    if(b != 0)
                    {
                         res = (float)a/b;
                    } else{
                         printf("Erro: divisão por zero\n");
                         continue;
                    }
                    break;
               default:
                    printf("Digite um carácteres válido (+, -, *, /)\n");
                    continue;
          }
          printf("Resultado: %.2f\n", res);
    }while(a >= 0 && b >= 0);

    return 0;
}