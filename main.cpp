/*

Copyright Piceno LLC. All rights reserved.

Programmers{
	Mario Aguilera Piceno - Founder
}

About: Program that contains multiple software tools, all packed in one.

Created: 09/16/2026
Last Modified: 09/16/2026

*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

// Int array to hold initial color data
struct RGB {
	uint8_t r, g, b;
};

// Generates and returns array of ints representing val in an array form
std::vector<int> toIntVector(int val) {
	std::vector<int> nums;
	if (val == 0) {
		nums.push_back(0);
	} else {
		while (val > 0) {
			nums.push_back(val % 10);
			val /= 10;
		}
		std::reverse(nums.begin(), nums.end());
	}
	return nums;
}

// Converts and returns num vector to char
std::string toString(std::vector<int> nums) {
	std::string numsString = "";
	int ascii_default = 65;
	for (auto x : nums) {
		numsString += static_cast<char>(ascii_default + x);
	}
	return numsString;
}

int main() {
	RGB color(0, 34, 255);
	std::string strN = "Test String: " + toString((toIntVector(color.r))) + toString((toIntVector(color.g))) + toString((toIntVector(color.b)));
	std::cout << strN << std::endl;
}