#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

char matrix[3][3];
char inst[3][3] = { '1','2','3','4','5','6','7','8','9'};
char player = 'X';
int n = 0;
int b = 0;

void clear() {
	n = 0;
	for (int i = 1; i < 3; i++) {
		for (int j = 1;j < 3 ;j++) {
			if(i = 1, j = 1) {
				matrix[0][0] = '1';
			}
			if (i = 1, j = 2) {
				matrix[0][1] = '2';
			}
			if (i = 1, j = 3) {
				matrix[0][2] = '3';
			}
			if (i = 2, j = 1) {
				matrix[1][0] = '4';
			}
			if (i = 2, j = 2) {
				matrix[1][1] = '5';
			}
			if (i = 2, j = 3) {
				matrix[1][2] = '6';
			}
			if (i = 3, j = 1) {
				matrix[2][0] = '7';
			}
			if (i = 3, j = 2) {
				matrix[2][1] = '8';
			}
			if (i = 3, j = 3) {
				matrix[2][2] = '9';
			}
		}
	}

}

void setup() {
	system("cls");
	cout << "==========" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0;j < 3;j++) {
			cout << "|";
			if (matrix[i][j] == 'X' || matrix[i][j] == 'O') {
				cout << matrix[i][j];
			}
			else {
				cout << " ";
			}
			cout << "|";
		}
		cout << endl;

		cout << "==========" << endl;
	}

}

void input() {
	int a;
	cout << "press the number of field : ";
	while (true) {
		cin >> a;
		if (a == 1 && matrix[0][0] != 'X' && matrix[0][0] != 'O') {
			matrix[0][0] = player;
			break;
		}
		else if (a == 2 && matrix[0][1] != 'X' && matrix[0][1] != 'O') {
			matrix[0][1] = player;
			break;
		}
		else if (a == 3 && matrix[0][2] != 'X' && matrix[0][2] != 'O') {
			matrix[0][2] = player;
			break;
		}
		else if (a == 4 && matrix[1][0] != 'X' && matrix[1][0] != 'O') {
			matrix[1][0] = player;
			break;
		}
		else if (a == 5 && matrix[1][1] != 'X' && matrix[1][1] != 'O') {
			matrix[1][1] = player;
			break;
		}
		else if (a == 6 && matrix[1][2] != 'X' && matrix[1][2] != 'O') {
			matrix[1][2] = player;
			break;
		}
		else if (a == 7 && matrix[2][0] != 'X' && matrix[2][0] != 'O') {
			matrix[2][0] = player;
			break;
		}
		else if (a == 8 && matrix[2][1] != 'X' && matrix[2][1] != 'O') {
			matrix[2][1] = player;
			break;
		}
		else if (a == 9 && matrix[2][2] != 'X' && matrix[2][2] != 'O') {
			matrix[2][2] = player;
			break;

		}
		else
			cout << "Opps, try again : ";
	}

}

void bot() {
	while (true) {
		b = rand() % 9;
		if (b == 1 && matrix[0][0] != 'X' && matrix[0][0] != 'O') {
			matrix[0][0] = 'O';
			break;
		}
		else if (b == 2 && matrix[0][1] != 'X' && matrix[0][1] != 'O') {
			matrix[0][1] = 'O';
			break;
		}
		else if (b == 3 && matrix[0][2] != 'X' && matrix[0][2] != 'O') {
			matrix[0][2] = 'O';
			break;
		}
		else if (b == 4 && matrix[1][0] != 'X' && matrix[1][0] != 'O') {
			matrix[1][0] = 'O';
			break;
		}
		else if (b == 5 && matrix[1][1] != 'X' && matrix[1][1] != 'O') {
			matrix[1][1] = 'O';
			break;
		}
		else if (b == 6 && matrix[1][2] != 'X' && matrix[1][2] != 'O') {
			matrix[1][2] = 'O';
			break;
		}
		else if (b == 7 && matrix[2][0] != 'X' && matrix[2][0] != 'O') {
			matrix[2][0] = 'O';
			break;
		}
		else if (b == 8 && matrix[2][1] != 'X' && matrix[2][1] != 'O') {
			matrix[2][1] = 'O';
			break;
		}
		else if (b == 9 && matrix[2][2] != 'X' && matrix[2][2] != 'O') {
			matrix[2][2] = 'O';
			break;

		}
	}
}

void control() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';

}

bool rule1() {
	if (n == 8) {
		return false;
	}
	else {
		n++;
		return true;
	}

}


bool win_condition_player1() {
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
		
		return false;
	}
	else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
		
		return false;
	}
	else if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
		
		return false;
	}
	else if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
		
		return false;
	}
	else if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
		
		return false;
	}
	else if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
		
		return false;
	}
	else if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
		
		return false;
	}
	else if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X') {
		
		return false;
	}
	else { return true;  }
}

bool win_condition_player2() {
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
		
		return false;
	}
	else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
		
		return false;
	}
	else if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
		
		return false;
	}
	else if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
		
		return false;
	}
	else if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
		
		return false;
	}
	else if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
		
		return false;
	}
	else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
		
		return false;
	}
	else if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O') {
		
		return false;
	}
	else { return true;
	}
}

void instruction() {
	system("cls");
	cout << "~~~INSTRUCTION~~~\n" << endl;
	cout << "==========" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0;j < 3;j++) {
			cout << "|";
			cout << " ";
			cout << "|";
		}
		cout << endl;

		cout << "==========" << endl;
	}
	cout << endl;
	cout << "    .  " << "\tPress the number on your keybord" << endl;
	cout << "    .  " << "\taccording to the position as below, " << endl;
	cout << "  ....." << "\tto fill your action in the blank" << endl;
	cout << "   . ." << endl;
	cout << "    ." << endl;
	cout << endl;
	cout << "==========" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0;j < 3;j++) {
			cout << "|";
			cout << inst[i][j];
			cout << "|";
		}
		cout << endl;

		cout << "==========" << endl;
	}

	system("pause");
}



int main() {
	char answer;
	srand(time(NULL));
	clear();
	cout << "\t\t\t\t Tic Tac Toe\n" << endl;
		cout << "\t\t\t\t(BETA VERSION)" << endl;
		cout << "\n\n" << endl;
		cout << "\n\n" << endl;
		cout << "\t\t\t\t Wanna play ???\n" << endl;
		cout << "\t\t\t   Press y for play with bot" << endl;
		cout << "\t\t\t  press n for play with friend" << endl;
		cout << "\n\t\t\t\tAnswer (y/n) :";
		cin >> answer;
		instruction();
		setup();
		if (answer == 'y' || answer == 'Y') {

			char player = 'X';
			while (true) {
				input();
				setup();

				if (win_condition_player1() == false) {
					cout << "\n\n\n\n\n\t\t\t      Player 1 win !!!!" << endl;
					break;
				}
				else if (win_condition_player2() == false) {
					cout <<"\n\n\n\n\n\t\t\t      Player 2 win !!!!" << endl;
					break;
				}
				else if (rule1() == false && win_condition_player1() == true && win_condition_player2() == true) {
					cout << "\n\n\n\n\n\t\t\t\t DRAW !!!! " << endl;
					break;
				}

				bot();
				setup();

				if (win_condition_player1() == false) {
					cout << "Player 1 win !!!!" << endl;
					break;
				}
				else if (win_condition_player2() == false) {
					cout << "Player 2 win !!!!" << endl;
					break;
				}
				else if (rule1() == false && win_condition_player1() == true && win_condition_player2() == true) {
					cout << "\n\n\n\n\n\t\t\t\t DRAW !!!! " << endl;
					break;
				}

			}
		}
		else if (answer == 'n' || answer == 'N') {
				
				while (true) {
					input();
					setup();
					control();
					if (win_condition_player1() == false) {
						cout << "\n\n\n\n\n\t\t\t      Player 1 win !!!!" << endl;
						break;
					}
					else if (win_condition_player2() == false) {
						cout << "\n\n\n\n\n\t\t\t      Player 2 win !!!!" << endl;
						break;
					}
					else if (rule1() == false && win_condition_player1() == true && win_condition_player2() == true) {
						cout << "\n\n\n\n\n\t\t\t\t DRAW !!!! " << endl;
						break;
					}

				}
			

		}

		cout << "\n\n\t\t\t  Wanna Play again (y/n) ? :";
		while (true) {
			cin >> answer;
			if (answer == 'y' || answer == 'Y') {
				system("cls");
				return main();
			}
			else if (answer == 'n' || answer == 'N') {
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\t\t\t Thank you for playing... !!! :)\n\n\n\n\n\n\n\n " << endl;
				break;
			}
			else { 
				system("cls");
				cout << "\n\n\n\n\t\t\tWanna Play again (y/n) ? :";
			}
		}

		system("pause");
		return 0;
	
}