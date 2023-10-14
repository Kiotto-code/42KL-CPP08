#include "Easyfind.hpp"



const char *NotFoundException::what() const throw()
{
	return "Huh? What is that?";
}

int main()
{
	try
	{
		std::vector <int> arr;
		arr.push_back(3);
		arr.push_back(2);
		arr.push_back(1);
		arr.push_back(4);
		// easyFind(arr, 3);
		decltype(arr)::iterator iter = easyFind(arr, 3);
		// std::vector <int>::iterator iter = easyFind(arr, 3);
		// <decltype (arr)>iterator iter = easyFind(arr, 3);
		// std::vector<int>::iterator iter = easyFind(arr, 3);
		std::cout << *iter << std::endl;
		std::cout << (*iter)++ << std::endl;
		std::cout << ++(*iter) << std::endl;
		std::cout << *iter << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error:\t" << e.what() << std::endl;
	}
}