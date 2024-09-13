#include <iostream>
#include <conio.h>

int GetWidthFromUser()
{
	std::cout << "Enter the width:  ";
	int width;
	std::cin >> width;
	return width;
}

int GetLengthFromUser()
{
	std::cout << "Enter the length:  ";
	int length;
	std::cin >> length;
	return length;
}

int CalculateArea(int width, int length)
{
	return width * length;
}

void DisplayArea(int area)
{
	std::cout << "The area of the rectangle is " << area << " units squared.\n";
}

void main()
{
	int width = GetWidthFromUser();
	int length = GetLengthFromUser();
	int area = CalculateArea(width, length);
	DisplayArea(area);
	std::cout << "Press any key to exit...";
	(void)_getch();

}


