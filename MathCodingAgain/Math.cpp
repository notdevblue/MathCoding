#include <iostream>
#include <cmath>

#pragma region 등차 등비
int isometric(int tolerance, int begin, int beginNum, int end);
long long geometric(int common, int begin, int beginNum, int end);
#pragma endregion

#pragma region 수열 합
int mirrorMetric(int begin, int end);
int mirrorOddMetric(int begin, int end);
long powint(int end);
long pow3int(int end);
#pragma endregion


int main()
{
#pragma region 등차 등비
	//std::cout << isometric(5, 1, 1, 400) << std::endl;
	//std::cout << geometric(5, 1, 1, 10) << std::endl;
#pragma endregion

#pragma region 수열 합
	std::cout << mirrorMetric(1, 7) << std::endl;
	std::cout << mirrorOddMetric(1, 9) << std::endl;
	std::cout << powint(4) << std::endl;
	std::cout << pow3int(4) << std::endl;
#pragma endregion

	return(0);
}
#pragma region 등차 등비
int isometric(int tolerance, int begin, int beginNum, int end)
{
	return beginNum + tolerance * (end - begin);
}

long long geometric(int common, int begin, int beginNum, int end)
{
	return beginNum * pow(common, end - begin);
}
#pragma endregion

#pragma region 수열 합
int mirrorMetric(int begin, int end)
{
	return end * end;
}
int mirrorOddMetric(int begin, int end)
{
	return (end / 2) * (end / 2) +
		((end + 1) / 2) * ((end + 1) / 2);
}
long powint(int end)
{
	return (end * (end + 1) * ((2 * end) + 1)) / 6;
}
long pow3int(int end)
{
	return ((end * (end + 1)) / 2) * 
		((end * (end + 1)) / 2);
}
#pragma endregion
