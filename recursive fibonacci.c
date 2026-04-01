
// Recursive ile fibonacci
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    //fibonacci kendinden önceki 2 sayının toplamıdır
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
 


int main() 
{
    int sayi, i;
    printf("Kac sayi olusturulacak:");
        scanf_s("%d", &sayi);

    for (i = 0;i < sayi;i++)
    {
        printf("%d ", fibonacci(i));
    }
         
}


/*
//Recursive Kullanmadan for ile fibonacci

int main() {
    int sayi, i;
    int birinci = 0, ikinci = 1;
    int son;

    printf("Kac terim yazdirmak istersiniz?: ");
    scanf_s("%d", &sayi);

    printf("Fibonacci Dizisi: ");

    for (i = 1; i <= sayi; ++i) {
        printf("%d ", birinci);

        son = birinci + ikinci;

        birinci = ikinci;
        ikinci = son;
    }

}
*/
