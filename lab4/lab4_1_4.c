/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/* This program calculates the energy of one photon of uder inputed wavelength
 * of light */

int main()
{
    double speed_light; //remove !
    double wave_length; //change from - to _
    double length_in_meters; //REMOVE ~
    double planck_const; //insert _
    double o_energy; //remove integer from variable

    planck_const = (6.62606957)*(pow(10,-34)); //Planck's constant
    speed_light = (2.99792458)*(pow(10,8)); //Constant for the speed of light
    wave_length = 0;
    length_in_meters = 0;
    o_energy = 0;

    printf("Welcome! This program will give the energy, in Joules,\n");
    printf("of 1 photon with a certain wavelength.\n");
    printf("Please input a wavelength of light in nano-meters.\n");
    printf("Please do not enter a negative, or zero, wavelength.\n");

    scanf("%lf", &wave_length);

    if (wave_length > 0.0)
    {
        length_in_meters = wave_length / pow(10,9); //Converting nano-meters to meters
        o_energy = (planck_const*speed_light) / (length_in_meters); //Calculating the energy of 1 photon
        printf("A photon with a wavelength of %08.3lf nano-meters, carries\n%030.25lf joules of energy.", wave_length, o_energy);
    }
    else
    {
        printf("Sorry, you put in an invalid number.");
        printf("Please rerun the program and try again.");
    }

    return 0;

}

