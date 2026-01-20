#include <stdio.h>

int main()
{
   float side;
   

    printf( "Enter the side length:");
    scanf( "%f", &side);
    
    float area = 6 * side * side;
    float volume = side * side * side;

   printf("Square area: %f\n", area);
    printf("Cube volume: %f\n", volume);
    return 0;

} 