#include <stdio.h>
#include <iostream>

#define Triangle 1
#define Rectangle 2
#define Trapezium 3
#define Ellipse 4
#define Square 5
#define Parallelogram 6
#define Circle 7
#define Sector 8


int main()
{
	int shape;
	int choice;
	float BaseLength;
	float Base1;
	float Base2;
	float VerticalHeight;
	float width;
	float Ellipseminor;
	float Ellipsemajor;
	float radius;
	float angle;
	float CalcArea;

	printf("Enter a number to choose a shape: \nTriangle = 1\nRectangle = 2\nTrapezium = 3\nEllipse = 4\nSquare = 5\nParallelogram = 6\nCircle = 7\nSector = 8\n");
	scanf_s("%d", &shape);

	switch (shape)
	{

	case Triangle:
		          printf("Enter Vertical Height: ");
		          scanf_s("%f", &VerticalHeight);
				  printf("Enter Base Length: ");
		          scanf_s("%f", &BaseLength);
		          CalcArea = (0.5 * VerticalHeight * BaseLength);
		          printf("Area of Triangle: %.2f", CalcArea);
		          break;
	case Rectangle:
		          printf("Enter Width: ");
		          scanf_s("%f", &width);
		          printf("Enter Height: ");
		          scanf_s("%f", &VerticalHeight);
		          CalcArea = (VerticalHeight * width);
		          printf("Area of Rectangle: %.2f", CalcArea);
		          break;
	case Trapezium:
		          printf("Enter Base 1: ");
		          scanf_s("%f", &Base1);
				  printf("Enter Base 2: ");
				  scanf_s("%f", &Base2);
		          printf("Enter Height: ");
		          scanf_s("%f", &VerticalHeight);
		          CalcArea = (0.5 * (Base1 + Base2) * VerticalHeight);
		          printf("Area of Trapezium: %.2f", CalcArea);
		          break;
	case Ellipse:
		          printf("Enter Minor Axis: ");
		          scanf_s("%f", &Ellipseminor);
		          printf("Enter Major Axis: ");
		          scanf_s("%f", &Ellipsemajor);
		          CalcArea = (3.14 * Ellipseminor * Ellipsemajor);
		          printf("Area of Ellipse: %.2f", CalcArea);
		          break;
	case Square:
		          printf("Length: ");
		          scanf_s("%f", &BaseLength);
		          CalcArea = (BaseLength * BaseLength);
		          printf("Area of Square: %.2f", CalcArea);
		          break;
	case Parallelogram:
		          printf("Enter Base Length: ");
		          scanf_s("%f", &BaseLength);
		          printf("Enter Height: ");
		          scanf_s("%f", &VerticalHeight);
		          CalcArea = (VerticalHeight * BaseLength);
		          printf("Area of Parallelogram: %.2f", CalcArea);
		          break;
	case Circle:
		          printf("Enter Radius: ");
		          scanf_s("%f", &radius);
		          CalcArea = (3.14 * radius * radius);
		          printf("Area of Circle: %.2f", CalcArea);
		          break;
	case Sector:
		          printf("Enter Radius: ");
		          scanf_s("%f", &radius);
		          printf("Enter Angle (in degrees): ");
		          scanf_s("%f", &angle);
		          CalcArea = (0.5 * radius * radius * angle);
		          printf("Area of Sector: %.2f", CalcArea);
		          break;




	}

	return 0;
}
	
	
	
	
	
	
	
	

