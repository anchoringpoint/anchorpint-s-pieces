#define _CRT_SECURE_NO_WARANINGS 1
#include"t1.h"

using namespace std;
inline long long jiecheng(long long x)
{
	long long t = 1;
	for (long long i = 1; i <= x; i++)
		t *= i;
	return t;
}
vector<long long>s;
int main()
{
	for (int i = 1; i <= 99; i++)
	{
		s.push_back(jiecheng(i));
	}
	shared_ptr< vector<long long>> t = make_shared<vector<long long>>(s);
}