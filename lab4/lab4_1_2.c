/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* This program takes two inputs acceleration
    and mass, and ouputs the force = mass*acceleration */

void force(double mass, double accel); 
double accel; // declare accel
double mass; //declare mass
int main() {
    double mass;

    printf("Enter an acceleration: ");
    scanf("%lf", &accel);//change to %lf

    printf("Enter the mass of the object: ");
    scanf("%lf", &mass); //change to %lf

    force(mass, accel);

    printf("You entered %lf m/s^2\n", accel);
    printf("You entered %lf kg\n", mass);

    return 0;
}

void force(double m, double accel) {
    mass = m / 1000;

    printf("The force is %lf milliNewtons\n", mass * accel);

    accel = accel*1000;

    printf("The force is %lf Newtons\n\n", mass * accel);
}
