#include<iostream>
#include<iomanip>
#include<conio.h>
#include <math.h>
using namespace std;

class fraction{
	int numerator, denominator;
public:
	fraction(int num, int den): numerator(num), denominator(den) {}
	void fmul(fraction a, fraction b);
	void lowterms();
	void assign(int num, int den){ numerator=num; denominator=den;}
	void dispN() const { cout<<numerator<<"/"<<denominator;}
	void disp() const { cout<<setw(7)<<numerator<<"/"<<setw(3)<<denominator;}};

void fraction::lowterms(){ 
	long tnum, tden, temp;
	tnum = labs(numerator);
	tden = labs(denominator);
	if(!(tnum)){ numerator=0; denominator=1; return;}
	while(tnum != 0){
	if(tnum<tden){ temp=tnum; tnum=tden; tden=temp;}
	tnum-=tden;}
	numerator/=tden; denominator/=tden;}

void fraction::fmul(fraction a, fraction b){
	numerator  =a.numerator*b.numerator;
	denominator=a.denominator*b.denominator;}

int main()
{

	fraction f(0, 0), f1(0, 0), f2(0, 0); int x;

	do{
		cout<<"Enter a number : "; cin>>x; cout<<"   ";
		for(int i=0; i<x-1;){ f.assign(++i, x); f.lowterms(); f.disp();}
		cout<<endl<<setfill('-')<<setw(10*x)<<' '<<setfill(' ');
		for(int j=0; j<x-1;){
			cout<<endl; f.assign(++j, x); f.lowterms(); f.dispN();
			for(int k=0; k<x-1;){
				f1.assign(++k, x); f2.assign(j, x);
				f.fmul(f1, f2); f.lowterms(); f.disp();}}
	cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
	}while(getch()=='c');
}
