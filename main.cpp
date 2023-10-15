#include<iostream>
#include<vector>
#include<algorithm>

void unique(std::vector<int>& v)
{
	std::sort(v.begin(), v.end());
	auto result = std::unique(begin(v), end(v));
	v.erase(result, v.end());
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::vector<int> vec{1, 1, 2, 5, 6, 1, 2, 4};

	std::cout << "\n[IN]: ";
	for (auto& it : vec)
	{
		std::cout << it << " ";
	}

	unique(vec);
	std::cout << "\n[OUT]: ";
	for (auto& it : vec)
	{
		std::cout << it << " ";
	}

	std::cout << "\n";

	return 0;
}