#include <iostream>
#include <cmath>

int Isometric(int tolerance, int begin, int beginNum, int end)
{
	return beginNum + tolerance * (end - begin);
}
long long Geometric(int common, int begin, int beginNum, int end)
{
	return beginNum * pow(common, end - begin);
}

int main()
{
	std::cout << Isometric(5, 1, 1, 400) << std::endl;
	std::cout << Geometric(5, 1, 1, 10) << std::endl;
	return(0);
}