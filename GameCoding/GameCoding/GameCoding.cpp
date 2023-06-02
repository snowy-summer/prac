#include <iostream>
#include "Map.h"
#include "Helper.h"
#include "Player.h"




using namespace std;
	

int main()
{
	SetCursorOnOff(false);

	//MovePlayer(3, 2);
	while (true)
	{
		//입력
		HandleKeyInput();

		//로직
		HandleMove();

		//출력

		PrintMap1D();
	}
	
}