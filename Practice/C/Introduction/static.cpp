#include <iostream>

using namespace std;

class variable
{
	private:
		static int count;
		 static int X;
		 static int Y;

	public:
		static void counter()
		{
			count++;
			cout<< count<<endl;
		}
	
	 void  Print()
	{
		cout <<"Value of X: "<< X  << endl;
		cout <<"Value of Y: " << Y << endl;
	}
};


int variable :: X=50;
int variable :: Y=100;
int variable :: count = 0;

int main()
{
	variable OB;
	variable::counter();

	OB.counter();
	OB.Print();
	
	return 0;
}