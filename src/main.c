#include <stdio.h>

int suma(int x, int y) 
{
int sum = x + y;
    return sum;

    
}

int multiplicacion(int x, int y) 
{
    int mul = x * y;
    return x * y;

}
aaaaaaaaaaaaaaaaa
int area (int base, int altura) 
{
    return (base * altura) / 2;

}


int main()
{
    int x = 0;
    int y = 0;

    printf( "enter the side length: %i\n", &x );
    scanf( "%i", &x );

    int a = area(x, y);

   printf("area: %i\n", a);
    return 0;

} 