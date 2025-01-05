#include <iostream>
#include <magic_enum/magic_enum.hpp>

#include <boost/program_options/option.hpp>

enum class Color : int{ RED1 = -10, BLUE = 0, GREEN = 10 };

int main()
{
	std::cout << "Hello!!!\n";

	Color c1 = Color::RED1;
	std::cout << magic_enum::enum_name(c1) << std::endl; // RED

	
	return 0;
}