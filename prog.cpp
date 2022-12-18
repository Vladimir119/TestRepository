#include<iostream>

int main() {
	size_t iter;
	std::cin >> iter;
	for (size_t i = 0; i < iter; ++i) std::cout << i << ' ';
	std::cout<< '\n';
	for (size_t i = iter; i >= 1; --i) std::cout<<i<< ' ';
	return 0;
}
