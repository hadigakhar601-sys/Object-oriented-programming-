# include <iostream>
# include <string>
using namespace std;

template <typename T>
void printTwice(T val){
	cout << val << endl;
	cout << val << endl;
}

int main(){
	cout << "---Print Twice---" << endl;
	printTwice(10);
	printTwice(3.14);
	printTwice(string("Hi"));
	
	return 0;
}
