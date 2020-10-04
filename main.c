/*
    Author: Mohammad Karimi
    Date: 2 November 2019
    Purpose: This program is to calculate the Minutes in Days and Years.
*/
#include<stdio.h>
#include<conio.h>
void main()
{   // Variable declaration
    float min;
    double day, year;
    //Taking the value from user
    printf("Enter the minutes to show its value in days and years: \n");
    scanf("%f",&min);

    //Calculating the days
    day = min / 1440;
    printf("%.1f minutes is equal to %.10f days\n",min,day);


    //Calculating the years
    year = min / 525600;
    printf("%.1f minutes is equal to %.10f years\n",min,year);

    //END OF PROGRAM
}
