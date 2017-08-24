#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::cout << "What is your name?" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;
	std::cout << "How old are you?" << std::endl;
	int age;
	std::cin >> age;
	std::cout << name << ", you are " << age << " years old." << std::endl;
	return 0;
}
