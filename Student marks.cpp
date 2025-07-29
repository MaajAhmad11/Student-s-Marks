#include <iostream>
using namespace std;

class Student{
	protected:
		int roll_no;
		string name;
	public:
		void input(){
			cout<<"Enter the Roll no. : ";
			cin>>roll_no;
			cout<<"Enter the name : ";
			cin>>name;
		}
		void Displaystudentdetail(){
			cout<<"STUDENT DETAILS"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Roll no. : "<<roll_no<<endl;
		}
};
class Marks: public Student{
	private:
		float eng, urdu, math;
	public:
	void input_marks(){
		cout<<"Enter English marks : ";
		cin>>eng;
		cout<<"Enter Urdu marks : ";
		cin>>urdu;
		cout<<"Enter Math marks : ";
		cin>>math;
	}
	void sum(){
		float total=eng+urdu+math;
		cout<<"Total Marks : "<<total;
	}
	void Display(){
		Displaystudentdetail();
		sum();
	}
};
int main(){
	Marks m;
	m.input();
	m.input_marks();
	m.Display();
}
