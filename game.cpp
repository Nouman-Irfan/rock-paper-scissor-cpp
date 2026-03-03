#include<iostream>
using namespace std;
int main()
{
	cout << "|--|--|--|--|--|--|--|--DEVELOPED BY MUHAMMAD NOUMAN--|--|--|--|--|--|--|--|" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "--|--|--|--|--|--|--|--LETS PLAY ROCK PAPER SCISSORS--|--|--|--|--|--|--|--|" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	system("pause");
	int user1 = 0;
	int user2 = 0;
	int rounds = 0;
	int score1 = 0;
	int score2 = 0;
	int invalid = 0;
	cout << "HOW MANY ROUNDS GAME YOU WANT TO PLAY : ";
	cin >> rounds;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "Select an option\n1.Rock\n2.Paper\n3.Scissors" << endl;
	for (int i = 0; i < rounds; i++)
	{
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Round " << i + 1 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Player 1 please enter your choice : ";
		cin >> user1;
		cout << "----------------------------------------------------------------------------" << endl;
		if (user1 >= 1 && user1 <= 3)
		{
			invalid = 0;
		}
		else
		{
			invalid = 1;
			cout << "Invalid Input" << endl;
			i--;
			continue;
		}
		cout << "Player 2 please enter your choice : ";
		cin >> user2;
		cout << "----------------------------------------------------------------------------" << endl;
		if (user2 >= 1 && user2 <= 3)
		{
			invalid = 0;
		}
		else
		{
			invalid = 1;
			cout << "Invalid Input" << endl;
			i--;
			continue;
		}
		if (user1 == 1 && user2 == 3)
		{
			cout << "Player 1 Win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score1++;
		}
		if (user1 == 1 && user2 == 2)
		{
			cout << "Player 2 win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score2++;
		}
		if (user1 == 2 && user2 == 1)
		{
			cout << "Player 1 win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score1++;
		}
		if (user1 == 2 && user2 == 3)
		{
			cout << "Player 2 win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score2++;
		}
		if (user1 == 3 && user2 == 1)
		{
			cout << "Player 2 win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score2++;
		}
		if (user1 == 3 && user2 == 2)
		{
			cout << "Player 1 win the round" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
			score1++;
		}
		if (user1 == user2)
		{
			cout << "IT IS A DRAW" << endl;
			cout << "NO SCORE IS CALCULATED!!!" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
	}
	cout << "----------------------------------------------------------------------------" << endl;
	if (invalid == 0)
	{
		cout << "Score of Player 1 is " << score1 << endl;
		cout << "Score of Player 2 is " << score2 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "------------------------------------WINNER----------------------------------" << endl;
		if (score1 > score2)
		{
			cout << "PLAYER 1 IS WINNER" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
		else if (score2 > score1)
		{
			cout << "PLAYER 2 IS WINNER" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
		else
		{
			cout << "MATCH IS DRAW" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
		int again = 0;
		cout << "If you want to play again press 1 and if you want to leave the terminal press 2 : ";
		cin >> again;
		cout << "----------------------------------------------------------------------------" << endl;
		if (again == 1)
		{
			main();
		}
		if (again == 2)
		{
			cout << "GOODBYE" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
	}
	else if (invalid == 1)
	{
		int choice = 0;
		cout << "IF YOU WANT TO PLAY AGAIN PRESS 1 AND TO EXIT PRESS 2" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cin >> choice;
		if (choice == 1)
		{
			main();
		}
		if (choice == 2)
		{
			cout << "Goodbye!!!" << endl;
			cout << "----------------------------------------------------------------------------" << endl;
		}
	}
	system("pause");
	return 0;
}