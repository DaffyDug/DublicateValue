#include <iostream>
#include <vector>
#include <set>
using namespace std;

/*
bool dublicates2(const vector<int>& arr)
{
	set<int> tempSet;
	for (auto item : arr)
	{
		tempSet.insert(item);
	}
	return arr.size() > tempSet.size();
}
*/


vector<int> dublicateValues(const vector<int>& srr)
{

}



/*
bool dublicates(const vector<int>& arr)
{

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[i] == arr[j])
			{
				return true;
			}
		}
	}
	return false;
}
*/




int main()
{
	vector<int> test{ 1,5,1,2,3,8 };
	cout << dublicates2(test);
}