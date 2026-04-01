
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
void fibonacci(int birinci,int ikinci,int son,int sayi,int i)
{
    if (i < sayi)
    {
        printf("%d ", birinci);
        son = birinci + ikinci;
        birinci = ikinci;
        ikinci = son;
        fibonacci(birinci, ikinci, son, sayi, i+1);
    }

    
}

int main()
{
    int birinci=0,ikinci=1,son=0,i=0,sayi;
    printf("Lutfen bir sayi gireinizz\n");
    scanf_s("%d",  &sayi);
    fibonacci(birinci, ikinci, son, sayi, i);

}

-------------


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