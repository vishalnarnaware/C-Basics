//WAP which takes time in sec as input
//and returns in hrs, min and sec
//Author: Vishal Narnaware
#include<stdio.h>

int main()
{
    long int time, hrs, mins, secs;
    printf("Enter time(in seconds): ");
    scanf("%ld", &time);
    //Calculating:
    hrs = time/3600;                    // 1 hour = 60*60secs
    mins = time/60 - 60*hrs;            // 1 min = 60 secs
    secs = time - 60*mins - 3600*hrs;   // Leftovers
    // Done
    printf("\nTime in proper format: ");
    printf("\nHours: %ld \t Minutes: %ld \t Seconds: %ld", hrs, mins, secs);
    return 0;
}
