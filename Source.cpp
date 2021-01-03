#include<iostream>
#include<conio.h>
#include<ctime>
#include<stdlib.h>

using namespace std;
//node structure that can store int
struct node {
	int data; //store the char
	node *next;
	node() {
		data = 0;
		next = NULL;
	}
};


//list class, declare data members as discussed and write constructor
class stack {

private:
	int size;//len use for lenght
	node *stop;
public:
	stack() {
		size = 0;
		stop = NULL;
	}
	~stack();
	bool  push(int);
	const void display();
	int pop();
	int sizes();
	int sizebypoi();
	bool push(node );
	int get(int x);

};

// enter char in list and return ture if add add incrase the list size
bool stack::push(int x) {
	node *t = new node();
	if (size == 0) {
		t->data = x;
		stop = t;
		size++;
		return true;
	}
	else
		t->data = x;
	t->next = stop;
	stop = t;
	size++;
	return true;
}
//display the lsit 
const void stack::display() {
	node *t;
	t = stop;
	while (t != NULL) {
		cout << t->data << endl;
		t = t->next;
	}
}
//remove  data in list and reduce the size of list and return the number 
int stack::pop(){
	node *t = stop;
	int a;
	if (stop == NULL) {
		return -999;

	}
	else
		
	
	stop = t->next;
	a = t->data;
	t->data = NULL;
	delete t;
	size--;
	return a;

}
//return size off list
int stack::sizes() {

	return size;
}
// return size but calculated from loop
int stack::sizebypoi() {
	node *t = stop;
	while (t != NULL) {
		t = t->next;
		size++;

	}
	return size;
}
//Constructer delete all the lite node
 stack::~stack() {
	 node *t=stop;
	 while (t != NULL) {
		 t = stop;
		 stop = stop->next;
		 delete t;
		 
	 }

}
 // put complete node in list and return true  
 bool stack::push(node num) {
	 node * t = new node();
	 t->data = num.data;
	 t->next = stop;
	 stop = t;
	 size++;
	 return true;
 }

 // return the data of index that give user en
 int stack::get(int x) {
	 node * t = stop;
	 if (size == 0 || x >= size) {
		 return -9999;
	 }
	 for (int i = 0; i<x; i++) {
		 t = t->next;
	 }
	 return t->data;
 }
 // chaeck box is empty or not and how much filled
 bool check(stack s) {
	 if (s.sizebypoi()<4) {
		 return false;
	 }

	 //that loop check the number present in descending order 
	 for (int i = 0; i<3; i++) {
		 if (s.get(i)<s.get(i + 1)) {
			 return false;
		 }
	 }
	 return true;
 }

 // main of program

void main() {
	stack A,B,C;
	// generate a random number
	srand(time(0));
	for (int i = 0; i < 4; i++) {
		int a = 1 + rand() % 10;
		A.push(a);

	}
	cout << "JAR A"<<endl;
	 A.display();
	 cout << endl;
	 char in1, in2;
	 //use loop to repeat the  step when the user complete the task
	 while (true) {
		
		 cout << "Jar A is "<<endl;
		 A.display();
		 cout << endl<< "Jar B is" << endl;
		 B.display();
		 cout << endl<<"Jar C is "<<endl;
		 C.display();
		 cout << endl<<"From which jar do you want to move block: ";
		 cin >> in1;
		 /*that if use to cheak the C jar have a perfect number patran
		 that user make a correct in input 1*/
		 if (in1 == '-9') {
			 if (check(C)) {
				 cout << endl<<" Solved it";
			 }
			 else {
				 cout <<endl <<" failed";
			 }
			 break;
		 }
		 cout << "To which jar: ";
		 cin >> in2;
		 if (in2 == '-9') {
			 if (check(C)) {
				 cout << endl<<" Solved it";
			 }
			 else {
				 cout << endl<<" failed";
			 }
			 break;
		 }
		 // thats all (if) to use move data from one jar to another jar  (A,B,C)
		 if (in1 == 'A'&&in2 == 'B') {
			 
				 B.push(A.pop());
			 
			 if (in2 == 'C') {
				 C.push(A.pop());
			 }
		 }
		 if (in1 == 'B'&&in2 == 'A') {
			
				 A.push(B.pop());
			 
			 if (in2 == 'C') {
				 C.push(B.pop());
			 }
		 }
		 if (in1 == 'C'&&in2 == 'A') {
			 
				 A.push(C.pop());
			 
			 if (in2 == 'B') {
				 B.push(C.pop());
			 }
		 }

	 }

	_getch();
}
