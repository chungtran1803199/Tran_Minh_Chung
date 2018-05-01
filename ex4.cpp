#include <iostream>
using namespace std;
class employee{
	private:
		int number;
		double comp;
	public:
		employee()
		{
			number=0;
			comp=0;
		}
		void setinfor()
		{
			cout<<" employee's number': ";
			cin>> number;
			cout<<" employee's compensation: ";
			cin>> comp;
		}	
		void show()
		{
			cout<< "number: "<< number<< endl;
			cout<< "compensation: "<< comp<< endl;
		}
};
int main()
{
	employee e1, e2, e3;
	cout<<"input employee 1"<< endl;
	e1.setinfor();
	cout<<"input employee 2"<< endl;
	e2.setinfor();
	cout<<"input employee 3"<< endl;
	e3.setinfor();
	e1.show(); 
	e2.show();
	e3.show();
	system("pause");
	return 0;
}
