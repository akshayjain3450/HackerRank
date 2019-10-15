#include<iostream>
using namespace std;
class sum
{
	public:
	int add(int X,int Y)
	{
			cout<< X+Y <<endl;
	}
};
int main()
{
	sum s;
	s.add(4,5);
	return 0;
}