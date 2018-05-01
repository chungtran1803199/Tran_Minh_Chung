#include<iostream>
using namespace std;
class Int{
	private:
		int num;
	public:
		Int (): num (0)
		{}
		Int (int temp):num (temp)
		{}
		int getnum()
		{
			return num;
		}
		void setnum(int temp)
		{
			num=temp;
		}
		void addnum( Int num1,Int num2)
		{
			num=(num1.getnum()+num2.getnum());
		}
};
int main()
{
	int a;
	cin>> a;
Int num3;
num3.setnum(a);
Int num4(5);
Int sum;
sum.addnum(num3,num4);
cout<<sum.getnum();
return 0;
}
