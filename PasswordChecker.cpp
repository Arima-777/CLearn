#include  <iostream>
#include  <string>

int main(){
using std::cout;
using std::cin;
using std::endl;
using std::pmr::string;
using namespace std;
	string	pass;
	cout << "Enter password. It no less then 6 symbols. First symbol is in Capital case." << endl;
	cin >> pass;
	char FirstLetter = pass[0];
	bool Paslength = pass.length()  >=6;
	bool CheckFirstLetter =  FirstLetter >= 'A' && FirstLetter <= 'Z';
	if (!Paslength){
		cout << "Length of pass less then 6!" << endl;
		return 1;
	}
	if (CheckFirstLetter){ 
	
		cout << "The first letter is not in Capital case!" << endl;
		return 1;
	}
	
	cout << "Correct password" << endl;
return 0;
}
