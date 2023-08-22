//22p31a1249
#include<iostream>
using namespace std;
class Student{
	private:
		string name,rollno,branch,college;
	public:	
		Student(string n,string r,string b,string c){
		this->name=n;
		this->rollno=r;
		this->branch=b;
		this->college=c;
	}
	void display(){
		cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<endl;
	}
};
int main(){
	Student s1("TEJU","22P31A1249","IT","ACET");
	Student s2("LIKKI","22P31A0548","CSE","ACET");
	s1.display();
	s2.display();
	return 0;
}

	

	
	
