#include <iostream>
#include <cmath>

int Isometric(int tolerance, int begin, int beginNum, int end);
double Geometric(int common, int begin, int beginNum, int end);

int main()
{
	std::cout << "Am = 1, 공차 = 5 일때 A400: " << Isometric(5, 1, 1, 400) << std::endl;
	std::cout << "Am = 1, 공비 = 5 일때 A400: " << Geometric(5, 1, 1, 400) << std::endl;
	return(0);
}

int Isometric(int tolerance, int begin, int beginNum, int end)
{
	return beginNum + tolerance * (end - begin);
}


double Geometric(int common, int begin, int beginNum, int end)
{
	return beginNum * pow(common, end - begin);
}
