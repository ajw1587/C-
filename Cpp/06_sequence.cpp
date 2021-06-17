#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vc = {10, 20, 30}
	cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;

	vc.push_back(40);
	cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;
	cout << "현재 벡터의 네 번째 요소는 " << vc[3] << "입니다." << endl;

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));

	return 0;
}
