#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>

std::string(name1);
std::string(name2);
int(age1);
int(age2);
int(wage1);
int(wage2);
/*
void Area(long long, int, int); // void Area (float)
void Area(double, int, int);
void Area(int);
void Area(int, double);
const double pi = 3.14;
//circle
void Area(long long a, int b, int c) { // void Area (float r)
	std::cout << "The circle's area is: "<< a * b * c << std::endl; //pi*r*r (pi*b*c)
}

//triangle
void Area(double d, int e, int f) { //double, double. 
	std::cout << "The triangle's area is: " << d * e * f << std::endl; // 0.5*e*f
}

//Squre
void Area(int g) {  //int s
	std::cout << "The square's area is: " << g * g << std::endl;
}

//Rectangle
void Area(int h, double i) { //int, int
	std::cout << "The rectangle's area is: " << h * i << std::endl;
}

/*
void printScreen(int);
void printScreen(int, int);
void printScreen(int, double);
void printScreen(std::string);
void printScreen(std::vector<int> );

void printScreen(std::string s) {
	std::cout << s;
}
void printScreen(int q, double b) {
	std::cout << q * b;
}
*/
/*
const int size = 80;
char sentence[size];
char ch;
char ch2;
std::string returnstring(std::string);

void getsentence(){

	ch = 'i';
	ch2 = '.';

	std::cout << "Please enter a sentence. \n";
	std::cin.getline(sentence, size);
}

void fixtext() {
	sentence[0] = toupper(sentence[0]);

	for (int i = 1; i < size; i++) {
		if (sentence[i] == ch && sentence[i - 1] == ' ' && sentence[i + 1] == ' ')
			sentence[i] = toupper(sentence[i]);
		else if (sentence[i] == ch2 && sentence[i + 1] == ' ')
			sentence[i + 2] = toupper(sentence[i + 2]);
	}

	std::cout << sentence << std::endl;
}

std::string returnstring(std::string S) {
	std::string RS;
	for (auto i : S) 
	{
		if (i == 's')
		{
			RS+=i;
		}
	}
	return RS;
}
*/
struct employes {
	std::string name;
	int age;
	int wage;
}e1,e2;

/*
struct students {
	std::string name;
	std::string ID;
	int age;
}/*s1,s2*///;
/*
class student {

};
*/
int main() 
{
/*
	students s1, s2;
	s1.name = "Ali";
	s2.name = "Abdi";

	s1.age = 25;
	s2.age = 19;

	if (s1.age > s2.age) {
		std::cout << s1.name << " is older";
	}
	else
	{
		std::cout << s2.name << " is older";
	}
	*/

	
	std::cout << "Insert the first name of user nr. 1: " << std::endl;
	std::cin >> name1;
	std::cout << "How old is " << name1 << "?" << std::endl;
	std::cin >> age1;
	std::cout << "How much does " << name1 << " earn yearly?" << std::endl;
	std::cin >> wage1;
	std::cout << "Insert the first name of user nr. 2: " << std::endl;
	std::cin >> name2;
	std::cout << "How old is " << name2 << "?" << std::endl;
	std::cin >> age2;
	std::cout << "How much does " << name2 << " earn yearly?" << std::endl;
	std::cin >> wage2;
	
	e1.name = name1;
	e1.age = age1;
	e1.wage = wage1;
	e2.name = name2;
	e2.age = age2;
	e2.wage = wage2;
	
	if (e1.wage > e2.wage)
	{
		std::cout << e1.name << " earn more money.";
	}
	else
	{

		std::cout << e2.name << " earn more money.";
	}
//	student s1;


//	std::cout << s1.name;
//	std::cout << s1.age;
	//Area(3.14159265359, 5, 7); //Area(5.0f);
	//Area(0.5, 3, 5);
	//Area(5);
	//Area(2, 3.5);

	//printScreen("hello what's up?");
	//printScreen(2, 3.5);
	//std::string st;
	//std::getline(std::cin, st);
	//std::cout << returnstring(st);
	//getsentence();
	//fixtext();
	
	return 0;
}

//test this: hello, i am erik and i like big and warm hugs. what do you like?