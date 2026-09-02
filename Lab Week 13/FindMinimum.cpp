# include <iostream>
# include <string>
using namespace std;

template <typename T>
T findMin(T a, T b) {
	return ( a<b ) ? a:b;
}

int main(){
cout << "Min int:" << findMin(5,9) << endl;
cout << "Min double:" << findMin(2.5, 1.8) << endl;
cout << "Min char:" << findMin('z','a') << endl;
 return 0;

}
