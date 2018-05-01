#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

class fraction_calculator
{
	private:
		int numerator;
		int denominator;
	public:
		fraction_calculator()
		{
			numerator=0;
			denominator=0;
		}
		void lowterms() // change ourself to lowest terms
		{
			long temp, tnum, tden, gcd;
			tnum = labs(numerator); // use non-negative copies
			tden = labs(denominator); // (needs cmath)
			if(tden==0 ) // check for n/0
			{ 
				cout << "Illegal fraction: division by 0";	
				exit(1); 
			}
			else if( tnum==0 ) // check for 0/n
				{ 
					numerator=0; denominator = 1;
					return; 
				}
			while(tnum != 0)
			{
				if(tnum < tden) // ensure numerator larger
				{ temp=tnum; tnum=tden; tden=temp; } // swap them
				tnum = tnum - tden; // subtract them
			}
			gcd = tden; // this is greatest common divisor
			numerator = numerator / gcd; // divide both num and den by gcd
			denominator = denominator / gcd; // to reduce frac to lowest terms
		}
		void set_fraction(int &num, int &den)
		{
			numerator=num;
			denominator=den;
		}
		fraction_calculator add(fraction_calculator &a, fraction_calculator &b)
		{
			fraction_calculator c;
			c.numerator=a.numerator*b.denominator+a.denominator*b.numerator;
			c.denominator=a.denominator*b.denominator;
			c.lowterms();
			return c;
		}
		fraction_calculator sub(fraction_calculator &a, fraction_calculator &b)
		{
			fraction_calculator c;
			c.numerator=a.numerator*b.denominator-a.denominator*b.numerator;
			c.denominator=a.denominator*b.denominator;
			c.lowterms();
			return c;
		}
		fraction_calculator mul(fraction_calculator &a, fraction_calculator &b)
		{
			fraction_calculator c;
			c.numerator=a.numerator*b.numerator;
			c.denominator=a.denominator*b.denominator;
			c.lowterms();
			return c;
		}
		fraction_calculator div(fraction_calculator &a, fraction_calculator &b)
		{
			fraction_calculator c;
			c.numerator=a.numerator*b.denominator;
			c.denominator=a.denominator*b.numerator;
			c.lowterms();
			return c;
		}
		void display()
		{
			cout<<"Result: "<<numerator<<"/"<<denominator<<endl;
		}
};
int main()
{
	fraction_calculator a,b,c;
	int x,y,e,z;
	char dumychar, n;
	int choice;
	cout<<"Enter fraction 1: ";
	cin>>x>>dumychar>>y;
	a.set_fraction(x,y);
	cout<<"Enter fraction 2: ";
	cin>>e>>dumychar>>z;
	b.set_fraction(e,z);
	do
	{	
	cout<<"Nhap phep tinh can thuc hien:\n1.Cong\n2.Tru\n3.Nhan\n4.Chia\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				c=c.add(a,b);
				c.display();
				break;
			}
		case 2:
			{
				c=c.sub(a,b);
				c.display();
				break;
			}
		case 3:
			{
				c=c.mul(a,b);
				c.display();
				break;	
			}
		case 4:
			{
				c=c.div(a,b);
				c.display();
				break;
			}
	}
	cout<<"Thuc hien phep toan khac (choice Y/N ):";
	cin>>n;
	}while(n =='y');
	return 0;
}
