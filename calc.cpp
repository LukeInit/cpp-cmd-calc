using namespace std;
#include <iostream>
#include <thread>
#include <cmath>
#include <chrono>


	double num1;
	double num2;
	int select;
	double final;

 int main(){
std::cout.precision(100);
do{

 std::cout << "\n  simple command line calculator will display upto 100 characters\n  0. exit\n  1. add\n  2. multiple\n  3. divide\n  4. minus\n\n  ";
 std::cin >> select;

 switch(select)
 {

 case 0:{

 	 break;

 	}
 	case 1:{
		system("cls");
 		std::cout << "  input the numbers\n  ";
 		std::cin >> num1;
 		std::cout << "  ";
 		std::cin >> num2;
 		final = num1 + num2;
 		std::cout << "  " << num1 << " + " << num2 << " = " << final << "\n";
 		this_thread::sleep_for(chrono::seconds(3));
		
 	}
	break;

	case 2:{
		system("cls");
 		std::cout << "  input the numbers\n  ";
 		std::cin >> num1;
 		std::cout << "  ";
 		std::cin >> num2;
 		final = num1 * num2;
 		std::cout << "  " << num1 << " * " << num2 << " = " << final << "\n";
 		this_thread::sleep_for(chrono::seconds(3));
		
 	}
	break;

	case 3:{
		system("cls");
 		std::cout << "  input the numbers\n  ";
 		std::cin >> num1;
 		std::cout << "  ";
 		std::cin >> num2;
 		final = num1 / num2;
 		std::cout << "  " << num1 << " / " << num2 << " = " << final << "\n";
 		this_thread::sleep_for(chrono::seconds(3));
	}
	break;

	case 4:{
		system("cls");
 		std::cout << "  input the numbers\n  ";
 		std::cin >> num1;
 		std::cout << "  ";
 		std::cin >> num2;
 		final = num1 - num2;
 		std::cout << "  " << num1 << " - " << num2 << " = " << final << "\n";
 		this_thread::sleep_for(chrono::seconds(3));
	}
 }
 }
 while(select != 0);
}