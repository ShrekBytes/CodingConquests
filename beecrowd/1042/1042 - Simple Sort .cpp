#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int nums[3] = {a, b, c};
	sort(nums, nums + 3);

	cout << nums[0] << "\n" << nums[1] << "\n" << nums[2] << endl;
	cout << endl;
	cout << a << "\n" << b << "\n" << c << endl;
	
	return 0;
}
