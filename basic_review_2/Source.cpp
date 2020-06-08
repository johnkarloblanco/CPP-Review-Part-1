//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <chrono>
//#include <thread>
//
//using namespace std;
//
////initializations
//int dice();
//
//
////main
//int main()
//{
//	using namespace this_thread;
//	using namespace chrono;
//
//	int counter = 5;
//
//	for (int i = 0; i < counter; i++)
//	{
//		dice();
//		sleep_for(seconds(1));
//	}
//
//	return 0;
//}
//
//
//int dice()
//{
//	int dice = 0;
//
//	//seed the random number generator
//	srand(time(0));
//
//	dice = (rand() % 15 + 1);
//	cout << "You rolled a " << dice << endl;
//
//	return 0;
//}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//initialization



//declarations
const int MAX_CHIPS = 100;
const float MAX_TURN = .5;


int main()
{
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	//string player1;
	//string player2;
	string playerName[2];
	cout << "Player 1, please enter your name: \n";
	cin >> playerName[0];
	cout << "Player 2, please enter your name: \n";
	cin >> playerName[0];

	srand(time(0));


	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
	cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;

	return 0;
}