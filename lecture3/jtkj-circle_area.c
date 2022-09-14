/**************************************
 * First c-ohjelma                         
 **************************************/

/*
 * Precompiler instructions
 */
// Include the stdio library in the program
#include <stdio.h> 

// Present PI Constant
#define PI 3.14159 

/*
 * Introduction of functions and variables within the program
 */

// Declaration of own function to calculate the area of a circle with the help of a prototype.
float calculate_area(float radius);  

/*
 * Pääohjelman main toteutus 
 */
int main() { 

   // Delclaration (and initialization) of internal variables in the main program. 
   float circle_area = 0.0, circle_radius = 0.0;

   // Pääohjelman toiminnallisuus
   printf("Insert the circle radius: "); 
   scanf("%f", &circle_radius);  
   circle_area = calculate_area(circle_radius);
   printf("Area of the circle is: %.2f\n", circle_area);

   // Return value of main function
   return 0;  
}  

/*
 * Function: calculate_area, calculates the area of a circle from a given radius
 * Argumentit: radius, circle radius
 */
float calculate_area(float radius)  {

   // Delclaration (and initialization) of internal variables in the main program.
   float surface_area = 0.0;

   // Function operations
   surface_area = PI * radius * radius;

   // Return value of the function
   return surface_area;  
}