#include <stdio.h>
#include "string.h"

double calculateArea(double height, double width);
double calculatePainter(double area, int numCoats, double m2PerLitre);


double height, width, m2PerLitre;
int numCoats;
double totalArea = 0;
char c;
double doors;
char windows;
double calculatePaint = 0;

double calculateArea(double height, double width) {

	double area = 0;
	area = height * width;
	return area;
}
double calculatePainter(double area, int numCoats, double m2PerLitre) {
	double totalPaint = 0;
	totalPaint = (totalArea * numCoats) / (m2PerLitre);
	return totalPaint;
}


int main() {
	do {
		printf("Enter Wall Height in mtrs: ");
		scanf_s("%lf", &height);
		printf("Enter Wall Width in mtrs: ");
		scanf_s("%lf", &width);
		totalArea = totalArea + calculateArea(width, height);
		printf("More Walls? <y/n> ");
		scanf_s(" %c", &c);

	} while (c == 'y');
	printf("Total Wall Area = %.2lf", totalArea);
	printf("\n");
	printf("How many doors present in room <count double doors as 2>: ");
	scanf_s("%lf", &doors);
	printf("\n");
	totalArea = totalArea - (doors * 2);
	printf("Total wall area minus doors: %.2lf", totalArea);
	printf("\n");
	printf("Are there windows in the room? <y/n>: ");
	scanf_s(" %c", &windows);
	if (windows == 'y') {
		printf("Enter window height in mtrs: ");
		scanf_s("%lf", &height);
		printf("Enter window width in mtrs: ");
		scanf_s("%lf", &width);
		totalArea = totalArea - calculateArea(height, width);
	}
	printf("\nAre there more windows? (y/n): ");
	scanf_s(" %c", &c);

	while (c == 'y') {
		printf("Enter window height in mtrs: ");
		scanf_s("%lf", &height);
		printf("Enter window Width in mtrs: ");
		scanf_s("%lf", &width);
		totalArea = totalArea - (height * width);

		printf("\nAre there more windows? (y/n): ");
		scanf_s(" %c", &c);
	}

	printf("The Total Wall area minus windows = %.2lf", totalArea);

	printf("\nWhat is the coverage per m2 of your paint: ");
	scanf_s(" %lf", &m2PerLitre);

	printf("\nhow many coats would you like? ");
	scanf_s(" %d", &numCoats);

	calculatePaint = calculatePainter(totalArea, numCoats, m2PerLitre);

	printf("\nYou will need %.2lf to the nearest litre, of paint.", calculatePaint);
}



