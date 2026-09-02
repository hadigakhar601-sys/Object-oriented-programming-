#include<iostream>
using namespace std;
class temperature{
	public:
		float celsius;
		float convert(){
			return (celsius*9/5)+32;
			
		}
	void display(){
		cout<<"Temperature in fahrenheit:"<<convert()<<endl;
	}	
};
int main(){
	temperature t;
	cout<<"Enter temperature in celsius :";
	cin>>t.celsius;
	t.display();
	
}

