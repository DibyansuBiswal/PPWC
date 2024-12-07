//Assignment 1 Q8

#include <stdio.h>
#include <math.h>

int main() {
    double speed_kmh, distance_m, speed_ms, acceleration, time;

    printf("Enter the takeoff speed of the jet (in km/hr): ");
    scanf("%lf", &speed_kmh);
    printf("Enter the distance over which the jet accelerates (in meters): ");
    scanf("%lf", &distance_m);

    speed_ms = speed_kmh * 1000.0 / 3600.0;

    acceleration = pow(speed_ms, 2) / (2 * distance_m);

    time = speed_ms / acceleration;


    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to reach takeoff speed: %.2f seconds\n", time);

    return 0;
}
