#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int data[11] = { 12,17,10,5,15,25,11,7,25,16,19 };

	vector<int> myVector(data, data + 11);

	auto cetakVector = [](const vector<int> vec, const string& judul)
		{
			cout << judul << endl;
			for (int val : vec)
			{
				cout << val << "|";
			}
			cout << "\n=======================================================\n";
		};
	cetakVector(myVector, "isi vector awal :");

	//asc (ascending)
	sort(myVector.begin(), myVector.end());
	cetakVector(myVector, "isi vector setelah asc :");

	//desc (descending)
	sort(myVector.rbegin(), myVector.rend());
	cetakVector(myVector, "isi vector setelah desc :");
}