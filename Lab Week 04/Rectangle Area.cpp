# include <iostream>
using namespace std;

class Rectangle{
	private:
		float length;
		float width;
		
	public:
		Rectangle() {
			length = 1.0;
			width = 1.0;
			
		}
		
		Rectangle (float l, float w) {
			length = l;
			width = w;
		}
		
		Rectangle (float side){
			length = side;
			width = side;
		}
		
		float area(){
			return length * width;
		}
		
		void display(){
			cout << "length:" << length <<", Width:" << width << endl;
			cout << "Area:" << area() << endl;
			
		}
};

int main() {
	Rectangle r1;
	r1.display();
	
	Rectangle r2(5.5, 3.2);
	r2.display();
	
	Rectangle r3(4.0);
	r3.display();
	
	return 0;
}
