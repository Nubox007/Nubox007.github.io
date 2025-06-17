#include <iostream>
#include <vector>
#include <algorithm>

#define INITIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;

int main()
{
	INITIO;
	
	cin >> n;
	vector<int> arr(n);
	
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	for (int i : arr) 
		cout << i << "\n";

	return 0;
}
