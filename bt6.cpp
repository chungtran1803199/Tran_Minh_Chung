#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class employee{
	class date{
		int day, month, year;
		char c;
	public:
		void getdate(){
		cout<<"Enter date in [12/31/97] format: ";
		cin >>day>>c>>month>>c>>year;}
		void showdate() const { cout<<setw(10)<<day<<c<<month<<c<<year;}};
	int emp_num; float emp_comp;
	date y; char *ret;
	enum etype { laborer, secretary, manager, accountant, executive, researcher };
public:
	void putemploy(int en, float ec);
	void getemploy() const { 
		cout<<setw(15)<<emp_num<<setw(25)<<emp_comp<<setw(15)<<ret;
		y.showdate(); cout<<endl; }};

void employee::putemploy(int en, float ec){
	emp_num=en; emp_comp=ec;
	etype x; y.getdate();
	cout<<"Enter employee type (first letter only)"<<endl
	    <<"(laborer, secretary, manager, accountant, executive, researcher): ";
	switch(getche()){
	case 'l': x=laborer   ; break;
	case 's': x=secretary ; break;
	case 'm': x=manager   ; break;
	case 'a': x=accountant; break;
	case 'e': x=executive ; break;
	case 'r': x=researcher;}
	switch(x){
	case 0: ret = "laborer"   ; break;
	case 1: ret = "secretary" ; break;
	case 2: ret = "manager"   ; break;
	case 3: ret = "accountant"; break;
	case 4: ret = "executive" ; break;
	case 5: ret = "researcher"; break;
	default: ret = "Undefined";}}

int main()
{
	
	employee x[3]; int a; float b;
	
	do{
	for(int i=0; i<3;){
	cout<<"\nEnter the employee "<<++i<<" number      : "; cin>>a;
	cout<<"Enter the employee "<<  i<<" compensation: "; cin>>b;
	x[i-1].putemploy(a, b);}
	cout<<endl<<setw(15)<<"employees number"
			  <<setw(25)<<"employee's compensation"
			  <<setw(15)<<"Employee type"
			  <<setw(15)<<"Date\n";
	for(int j=0; j<3; j++) { x[j].getemploy();}
	cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
	}while(getch()=='c');
}
