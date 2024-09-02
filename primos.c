#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int x, y;

    printf("Digite o começo da sua sequência:\n");
    scanf("%d", &x);
    
    printf("Digite o fim da sua sequência:\n");
	scanf("%d", &y);
    if (x >= y || x < 0)
    {
        printf("\nSequência inválida.\n");
    }
    else
    {

        while (x <= y)
        {

            if ((x!=1) &&((x == 2) || (x == 3) || (x % 2 != 0 && x % 3 != 0 && x % x - 1 != 0)))
            {
                printf("%d ", x);
            }

            x++;
        }
    }

    return 0;
}