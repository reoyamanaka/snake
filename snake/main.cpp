#include <iostream>
using namespace std;

#include <Windows.h>

int nScreenWidth = 120;
int nScreenHeight = 80;

struct sSnakeSegment {
	int x;
	int y;
};

int main() {
	//create screen buffer
	wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
	for (int i = 0; i < nScreenWidth * nScreenHeight; i++) screen[i] = L' ';
		HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

	//creating linked list object for snake
	list<sSnakeSegment> snake = { {60,15}, {61, 15},{62, 15}, {63, 15}, {64, 15}, {65, 15}, {66, 15}, {67, 15}, {68, 15}, {69, 15}, };  //snake's default state - for each element of the snake, we'll store some coordinates. we're starting at segment {60, 15};
	int nFoodX = 30;
	int nFoodY = 15;
	int nScore = 0;
	int nSnakeDirection = 3;
	bool bDead = false;



	
	while (1) {
		//timing and input



		//game logic

		//display to player
		//clear screen
		for (int i = 0; i < nScreenWidth * nScreenHeight; i++) screen[i] = L' ';

		//draw stats and border

		
		//display frame
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth, nScreenHeight, { 0, 0 }, &dwBytesWritten);

	}

	return 0;
}