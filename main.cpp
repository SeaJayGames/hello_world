#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	str name;
	str answer;
	cout << "Hello! What's your name?"; << endl;
	cin >> name >> endl;
	cout << "Oh, hi " << name << "." << endl;
	MARKER:cout << "Are you ready to play a game? Y or N"; << endl;
	cin >> answer >>
	if (answer = "Y"){
		cout << "Yeah, let's go!"; << endl;
	}
	else {
		cout << "Why not?"; << endl;
		goto MARKER;
	}
	int score;
}
while (lives > 0) {
	deathdoor = rand() % 3 + 1;
	cout << "There are three doors, behind one is a deadly threat to your survival, choose wisely." << endl;
	cin >> ans >> endl;
	if (ans = deathdoor ) {
		lives = lives - 1;
		cout << "Oh no! You took the door with the monster in it!" << endl;
		if (lives > 0){
			cout << "You defeated the monster!"; << endl;
		}
	}
	else {
		cout << "You succesfully picked the right room!" << endl;
		score = score + 1;
	}
}
