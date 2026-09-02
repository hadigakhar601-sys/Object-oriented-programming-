# include <iostream>
# include <string>
using namespace std;

class Voter{
	private:
	string name;
	int age;
	public:
		void input(){
	cout<<"Enter name without spacing:" << endl;
	cin>> name;
	cout <<"Enter Age:" << endl;
	cin >> age;
	}
		void isEligible();
};


void Voter :: isEligible(){
	if(age >= 18){
		cout<< "Voter Eligible!" << endl;
	}
	
	else{
		cout<< "Not Eligible for voting." << endl;
	}
}

int main(){
	Voter v1;
	v1.input();
	v1.isEligible();
	
	return 0;
	
}
