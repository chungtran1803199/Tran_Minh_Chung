#include <iostream>
#include <conio.h>
using namespace std;
class tollboth{
	private:
		unsigned int car;
		double cost;
	public:
		tollboth()
		{
			car=0;
			cost=0;
		}
		tollboth(unsigned int Car):car(Car)
		{}
		tollboth(double Cost):cost(Cost)
		{}
		void payingcar()
		{
			car++;
			cost+=0.5;
		}
		void nopayingcar()
		{
			car++;
		}
		void show()
		{
			cout<< "\nnumbers of car "<< car<< endl;
			cout<< "mount of money "<< cost<< endl;
		}
};

int main ()
{
	tollboth car, cost, t;
	char x;
	cout<<"p= payingcar"<< endl;
	cout<<"n= nopayingcar"<< endl;
	while(1)
	{
		x=getche();
		switch(x)
		{
			case 'p':
			t.payingcar();
			break;
			case 'n':
			t.nopayingcar();
			break;
			case 27:
			t.show();
			return 0;
		}
	}

}
