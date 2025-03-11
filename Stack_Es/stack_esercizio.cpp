#include <iostream>
using namespace std;
struct stack{
	int data[8];
	int top;
	
	stack();
	void push(int value);
	int pop();
	bool empty();
	bool full();
	void print();
};
stack::stack(){
	top = 0;
}
void stack::push(int value){
	if (top<8)
	data[top++] = value;
}
int stack::pop(){
	if (top>0)
	return data[--top];
	return 0;
}
bool stack::full(){
	return (top == 8);
}

bool stack::empty(){
	return(top==0);
}
void stack::print(){
	for (int i = 0; i<8; i++){
		std::cout<<data[i]<<std::endl;
	}
}

int main(void){
	stack s1;
	std::cout << "Inserisci quanti numeri inserire nello stack";
	int valore;
	std::cin>>valore;
	for (int i = 0; i<valore;i++){
		std::cout<<"Inserisci valore";
		int numero;
		std::cin >> numero;
		s1.push(numero);
	}
	s1.print();
}