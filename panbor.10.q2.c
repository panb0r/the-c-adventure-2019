#include <stdio.h>
#include <conio.h>
void main()
{
     Clrscr ();
    int n, reversedNumber = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", reversedNumber);
    return 0;
     Getch ();
}
