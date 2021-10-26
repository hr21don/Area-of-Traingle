#include <stdio.h> // Standard I.O libary

int main(void) {

//Defined Menu
int choice;
printf(" /n0: Calculate the area of a traingle /n");
printf(" /n1 : Calculate the are of a square /n ");
printf(" /n2: Calculate array: /n ");
printf(" /n3: printresult ");
printf(" /n Enter choice (1,2,3,4)");
scanf("%d", &choice);

if (choice ==1) //Starting Condition
{
  float base1, height1, area;
  
  	printf("\n Please Enter the Base of a Triangle  :  ");
  	scanf("%f", &base1);
   
  	printf("\n Please Enter the Height of a Triangle  :  ");
  	scanf("%f", &height1);
  	
  	area = (base1 * height1) / 2;
   
  	printf("\n The Area of a Triangle using Base and Height = %.2f\n", area);
    	return 0; // Program terminated
}
else if (choice == 2)
{
    float side, area2; 
 
   printf("\nEnter the Length of Side : ");
   scanf("%f", &side);
 
   area2 = side * side;
   printf("\nArea of Square : %f", area2);
   	return 0; // Program terminated
}
else if (choice == 3)
{
float squarelengths[5] = {6,1,5,0,2.5};
int i;

  for (i = 1; i < 5; ++i)
  {
    float side, area2; 
 
   printf("\nEnter the Length of Side : ");
   scanf("%f", &side);
 
   area2 = side * side;
   printf("\nArea of Square : %f", area2);
  }
  
  return 0; // Program terminated
}
else if (choice ==4) 
{
float printresults[10] = {1,5,6,3,2,4,12,14,15,2.9};
printf("Display elements of the array:");
for(int i = 0; i < 10; ++i) {
     printf("%f\n", printresults[i]);
  }
    return 0 ;  // Program terminated
}
  else 
  {
    printf("/n invalid choice!");
  }
   return 0; // Program terminated

}