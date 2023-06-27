#include <algorithm>
#include <vector>
#include <iostream>

int f(int element) { return element + 1; }

int main() {
	std::vector<int> arr{ 1,2,3,4 };
	std::for_each(arr.begin(), arr.end(), [](int& element) {element = f(element); });

	for (auto i = arr.begin(); i != arr.end(); ++i) {
		std::cout << *i << std::endl;
	}

	return 0;
}