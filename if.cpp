#include <iostream>

int main()
{
char answerMoney, answerParty;
bool salary, wishes;
	std::cout<<"Do you have any money?"<<std::endl;
	std::cin>>answerMoney;
	if(answerMoney=='y') {salary=true;}
	else {salary=false;}

	std::cout<<"Would you like to have a party?"<<std::endl;
	std::cin>>answerParty;
	if(answerParty=='y') {wishes=true;}
	else {wishes=false;}
if(salary&&wishes)
	{
		std::cout<<"party"<<std::endl;
	}
else {std::cout<<"Yanky, go home!"<<std::endl;}
return 0;
}
