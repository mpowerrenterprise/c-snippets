#include <stdio.h>

int main()
{


	int radious;
	printf("Please Enter a radious %s\n");
	scanf("%i",&radious);

	double area = 3.14159 * (radious * radious);
	printf("The area of a circle is  %f\n", area);
	return 0;


}