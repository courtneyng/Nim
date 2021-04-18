/*
Courtney Ng
Period 4
Project Nim X
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int player, num = rand() % 100 + 1;
	
	cout << "The starting number is: " << num << endl;
	
	if ((num % 3) == 0){
		cout << "You go first.\n";
		cout << "Take away 1 or 2: ";
		cin >> player;
		do{
			num -= player;
			cout << num << "\nCPU's turn: ";
			
			
			
		}while (player == 1 || player == 2);
	}
	else if((num % 3) == 1){
		cout << "CPU goes first."
		num -=
	}
}
