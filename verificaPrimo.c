#include <stdio.h>
int verificaPrimo(int numero)
{
    int primo = 1;
    int i = 2;

    while (i < numero)
    {
        if (numero % i == 0)
        {
            primo = 0;
            break;
        }

        i++;
    }

    return primo;
}

void main()
{
   int num;

   printf("insira um numero: ");
   scanf("%d", &num);

   int p = verificaPrimo(num);

   if (p == 1) printf("numero primo");
   else printf("numero nao primo");

}
