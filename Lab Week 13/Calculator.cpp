# include <iostream>
# include <string>
using namespace std;

template < typename T>
class Calculator{
	
	private:
		T a,b;
		
	public:
		
	Calculator(T x, T y){
		a =x ;
		b = y;
	}
	
	T add(){
		return a + b;
	}
	
	T subtract(){
		return a - b;
	}
	
	T multiply(){
		return a * b;
	}
};

int main(){
	
	Calculator <int> calc1(10,5);
	cout << "Int Calc -> Add: " << calc1.add() << " Sub: " << calc1.subtract() <<" Multiply: " << calc1.multiply() << endl;
	
	Calculator <double> calc2(5.5, 2.0);
	cout << "Double Calc -> Add: " << calc2.add() << " Sub " << calc2.subtract() << " Multiply: " << calc2.multiply() << endl;
	
	return 0;
}
