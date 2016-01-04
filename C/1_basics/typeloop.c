#include <stdio.h>

// define some constants
#define LOWER   0
#define UPPER   300
#define STEP    20
#define NAME    "Alexander"

main()
{
    int  c;
    long fahr;
    double nc;
    
    /** Print Fahrenheit-Celsious table
        Conversion: C = (F-32)*5/9
        */
    printf("Fahrenheit-Celsius table\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        // ld is long d (use "d" for integer)
        printf("%3ld %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    /** A parrot program:
        Repeat what you says
        */
    printf("\n** Parrot talks **\n");
    printf("(Say something, Ctrl-D or EOF to stop)\n");
    while ((c = getchar()) != EOF) // Assignment expr returns the lhs' value
    {
        putchar(c);
        printf("%c", c);
    }
    
    /** Count number of input characters
        */
    printf("\nMy name is %s\nYour name is: ", NAME);
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("Your name has %.0f characters\n", nc);
}
