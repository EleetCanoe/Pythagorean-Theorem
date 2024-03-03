/* Title
Pythagorean Theorem.c
Calculates remainder value of triangle when two inputs are given

Miles Wasil
*/

#include <stdio.h>
#include <math.h>

int main()
{
    puts("        *");
    puts("  H   ***");
    puts("    ***** O");
    puts("  *******");
    puts("*********");
    puts("    A");
    
    printf("%s", "What is the unknown? (enter A as 65, O as 79, H as 72): ");
    int unknownValue;
    scanf("%d", &unknownValue);

    double adj, opp, hyp;
    adj = opp = hyp = 0;
    switch(unknownValue)
    {
        case 65:
            printf("%s", "Enter known values in order O, H: ");
            scanf("%lf %lf", &opp, &hyp);
            adj = sqrt((hyp * hyp) - (opp * opp)); // Pythagorean formula to find ADJACENT
            printf("Adjacent is %.3lf units long.", adj);
            break;
        case 79:
            printf("%s", "Enter known values in order A, H: ");
            scanf("%lf %lf", &adj, &hyp);
            opp = sqrt((hyp * hyp) - (adj * adj)); // Pythagorean formula to find OPPOSITE
            printf("Opposite is %.3lf units long.", opp);
            break;
        case 72:
            printf("%s", "Enter known values in order A, O: ");
            scanf("%lf %lf", &adj, &opp);
            hyp = sqrt((adj * adj) + (opp * opp)); // Pythagorean formula to find HYPOTENUSE
            printf("Hypotenuse is %.3lf units long.", hyp);
            break;
        default:
            break;
    }
}