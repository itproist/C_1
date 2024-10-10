#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   

#define PI 3.14159

#define TASK_3

#ifdef TASK_1

int main(void)                   
{    
    double radius, height, volume;
    printf("Enter the radius of the base and the height of the cylinder: ");
    scanf("%lf %lf", &radius, &height);
    volume = PI * radius * radius * height;
    printf("Cylinder volume: %.2f\n", volume);

    return 0;                       
}  
#endif

#ifdef TASK_2

int main(void)                   
{    
    double surfaceArea, radius, height;
    printf("Enter the radius of the base and the height of the cylinder: ");
    scanf("%lf %lf", &radius, &height);
    surfaceArea = 2 * 3.14159 * radius * (radius + height);
    printf("Cylinder surface area: %.2f\n", surfaceArea);

    return 0;                       
}  
#endif

#ifdef TASK_3

int main(void)                   
{    
    int totalMinutes, hours, minutes;
    printf("Enter the time interval in minutes: ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("Time: %d hours and %d minutes\n", hours, minutes);

    return 0;                       
}  
#endif

#ifdef TASK_4

int main(void)                   
{    
    double pounds, kilograms;
    printf("Enter the weight in pounds: ");
    scanf("%lf", &pounds);
    kilograms = pounds * 0.4059;
    printf("Weight in kilograms: %.2f\n", kilograms);

    return 0;                       
}  
#endif

#ifdef TASK_5

int main(void)                   
{    
    double verst, kilometers;
    printf("Enter the distance in miles: ");
    scanf("%lf", &verst);
    kilometers = verst * 1.0668;
    printf("Distance in kilometers: %.2f\n", kilometers);

    return 0;                       
}  
#endif

#ifdef TASK_6

int main(void)                   
{    
    double resistance, voltage, current;
    printf("Enter the resistance (ohms) and voltage (В): ");
    scanf("%lf %lf", &resistance, &voltage);
    current = voltage / resistance;
    printf("Current strength: %.2f А\n", current);

    return 0;                       
}  
#endif

#ifdef TASK_7

int main(void)                   
{    
    double weight, pricePer100g, totalCost;
    printf("Enter the weight of the apples in grams and the price per 100 grams: ");
    scanf("%lf %lf", &weight, &pricePer100g);
    totalCost = (weight / 100) * pricePer100g;
    printf("The cost of apples: %.2f\n", totalCost);

    return 0;                       
}  
#endif

#ifdef TASK_8

int main(void)                   
{    
    double r1, r2, parallelResistance;
    printf("Enter the resistance of the first and second resistors: ");
    scanf("%lf %lf", &r1, &r2);
    parallelResistance = 1 / ((1 / r1) + (1 / r2));
    printf("Circuit resistance: %.2f Ом\\n", parallelResistance);

    return 0;                       
}  
#endif


#ifdef TASK_9

int main(void)                   
{    
    double length, width, area;
    printf("Enter the lengths of the sides of the rectangle: ");
    scanf("%lf %lf", &length, &width);
    area = length * width;
    printf("The area of the rectangle: %.2f\\n", area);

    return 0;                       
}  
#endif

#ifdef TASK_10

int main(void)                   
{    
    double pricePerKg;
    printf("Enter the weight of the apples in kilograms and the price per kg: ");
    scanf("%lf %lf", &weight);
    scanf("%lf", &pricePerKg);
    totalCost = weight * pricePerKg;
    printf("The cost of apples: %.2f\\n", totalCost);

    return 0;                       
}  
#endif

#ifdef TASK_11

int main(void)                   
{    
    double distance, petrolConsumption, petrolPrice, tripCost;
    printf("Enter the distance to the cottage (km), gasoline consumption per 100 km, the price of gasoline: ");
    scanf("%lf %lf %lf", &distance, &petrolConsumption, &petrolPrice);
    tripCost = (distance * 2) / 100 * petrolConsumption * petrolPrice;
    printf("The cost of the trip: %.2f\\n", tripCost);

    return 0;                       
}  
#endif

#ifdef TASK_12

int main(void)                   
{    
    double lengthP, heightP, widthP, volumeP;
    printf("Enter the length, height and width of the parallelepiped: ");
    scanf("%lf %lf %lf", &lengthP, &heightP, &widthP);
    volumeP = lengthP * heightP * widthP;
    printf("The volume of the parallelepiped: %.2f\\n", volumeP);

    return 0;                       
}  
#endif



