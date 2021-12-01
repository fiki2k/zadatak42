// Program treba naci prosjek 2 broja preko funkcije.

#include <stdio.h>

float prosjek(int br1,int br2)
{
	float avg;
	avg= (float)(br1+br2)/2;
	return avg;
	
}


int main()
{
    int br1, br2;

    printf("Unesi prvi broj: ");
    scanf("%d",&br1);
    printf("Unesi drugi broj: ");
    scanf("%d",&br2);

	// Pozivamo funkciju
    float x=prosjek(br1,br2);
    

    //%.2f se koristi za prikaz do 2 decimalna mjesta
    printf("Prosjek od %d i %d je: %.2f",br1,br2,x);

    return 0;
}
