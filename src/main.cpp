#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = string{};
	cin >> s;

	auto ans = int{ 0 };
	for (const auto& x : s) {
		if ('a' == x ||
			'e' == x ||
			'i' == x ||
			'o' == x ||
			'u' == x) {
			++ans;
		}
	}

	cout << ans;

	return 0;
}