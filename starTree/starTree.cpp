// starTree.cpp : Defines the entry point for the console application.
//
#include <iostream>


int main()
{

	for (int i = 10; i >= 0; i--)
	{
		for (int s = 0; i > s; s++)
		{
			std::cout << " ";
		}
		for (int j = 10; j > i; j--)
		{
			std::cout << "*";
		}
		for (int s = 10; s > i; s--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	system("pause");
    return 0;
}

