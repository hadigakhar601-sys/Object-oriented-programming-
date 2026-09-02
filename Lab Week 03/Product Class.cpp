#include<iostream>
#include<string>
using namespace std;

class Product{
	private:
		string name;
		double price;
		int quantity;
	public:
		// Setters
		void setName(string n)
		{ if(n.empty()) {
		cout << "Error. Name cannot be empty.\n";}
		else{ 
	        name=n;}
		}
		
		void setPrice(double p)
		{ if(p<=0){
		cout << "Invalid Price.\n";}
		else{
		price=p ;}
		}
		
		void setQuantity(int q)
		{if(q>=0){
		quantity=q;}
		else {
		cout<< "Invalid Quantity!" << endl;}
		}
		
		//Getters
		string getName(){
			return name;
		}
		
		int getQuantity(){
			return quantity;
		}
		
		double getPrice(){
			return price;
		}
	};
  int main(){
  Product p;
  p.setName("");
  p.setPrice(-50);
  p.setQuantity(-2);
  
  p.setName("Laptop");
  p.setPrice(1200.50);
  p.setQuantity(5);
  
  cout << "Product: "<< p.getName() << endl;
  cout << "Price: $" << p.getPrice() << endl;
  cout << "Quantity: "<< p.getQuantity() << endl;
  return 0;
  }
