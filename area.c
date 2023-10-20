/**
 * Author: Chris Bourke
 * 
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  float area, base, height;

  printf("Please enter the base of a triangle: ");

  scanf("%f", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%f", &height);
// i change the formula of area because it is invalid
  area =(base * height)/2;

  printf("The area is %f square units.\n", area);

  return 0;
}
