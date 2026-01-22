#include <stdio.h>

//Funcion regresa 1 si el numero es par, 0 si es impar y 3 si es cero
int is_even(int num) 
{
   if (num == 0)
   {
      return 3; //cero
   }
   else 
   {
    if (num % 2 == 0) 
    {
        return 1; //es par
    } 
    else if (num % 2 != 0)
    {
        return 0; //es impar
    }
   }
    
}

int main()
{
   int num;

    //para solicitar un numero
    printf( "Ingresa un Numero:");
    scanf( "%d" , &num);
    
        if (is_even(num) == 1) //Verifica si el numero es par
        {
        printf("El numero es par\n");
        } 
        else if (is_even(num) == 0) //Verifica si el numero es impar
        {
        printf("El numero es impar\n");
        }
        else if (is_even(num) == 3) //Verifica si el numero es cero
        {
        printf("El numero es cero\n");
        }

    return 0;
}

