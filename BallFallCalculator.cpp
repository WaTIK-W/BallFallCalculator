#include <iostream>
#include "myContstants.h"

double metresCalculate(float height, float seconds)
{
	float metres = height - (contstants::gravity * (seconds * seconds / 2));
	if (metres < 0)
		return 0;
	else
		return metres;

	return -1;
}

int main()
{
	std::cout << "Enter a height: ";
	float height;
	std::cin >> height;

	for (float seconds = 0; seconds < 6; seconds++)
	{
		if (metresCalculate(height, seconds) == 0)
		{
			std::cout << "At " << seconds << " seconds, ball is on the ground" << std::endl;
			return 0;
		}
		else
			std::cout << "At " << seconds << " seconds, ball is on the " << metresCalculate(height, seconds) << " metres" << std::endl;
	}

	return 0;
}