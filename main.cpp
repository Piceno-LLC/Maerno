#include <iostream>
#include <string>

int main() {
	int ascii_default = 65;
	int x = 255, y = 0, z = 0;

	std::string strN = "" + static_cast<char>(x) + static_cast<char>(y) + static_cast<char>(z);
	std::cout << strN << std::endl;
}