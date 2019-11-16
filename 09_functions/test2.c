#include <stdio.h>

double calcCylinderVolume(double CylinderRadius, double CylinderHeight);

int main(void)
{
    double Volume = 0.0;
    double Radius = 10.0;
    double Height = 40.0;

    Volume = calcCylinderVolume(Radius, Height);

    printf("%lf\n", Volume);

    return 0;
}

double calcCylinderVolume(double CylinderRadius, double CylinderHeight)
{
    double CylinderVolume = 0.0;

    // CylVol = pi * r * r * h
    CylinderVolume = 3.14159 * CylinderRadius * CylinderRadius * CylinderHeight;

    return CylinderVolume;
}
