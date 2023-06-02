#include "Player.h"
#include "Map.h"
#include "Helper.h"

bool canMove = true;
int GPlayerX =2;
int GPlayerY =2;
void MovePlayer(int x, int y)
{
	//범위 체크

	if (x < 0 || x >= Map_size)
		return;
	if (y < 0 || y >= Map_size)
		return;

	//벽 체크
	int index = y * Map_size + x;
	if (GMap1D[index] == 1)
		return;

	//기존 위치 정리
	{
		int index = GPlayerY * Map_size + GPlayerX;
		GMap1D[index] = 0;
	}


	//새 위치 이동


	{
		GPlayerX = x;
		GPlayerY = y;
		int index = GPlayerY * Map_size + GPlayerX;
		GMap1D[index] = 2;
	}

}


void HandleMove()
{
	//키보드 떼고 있으면, 다음번에 움직일 수 있다.
	if (GMoveDir == MD_NONE)
	{
		canMove = true;
		return;
	}

	if (canMove == false)
		return;

	canMove = false;

	switch (GMoveDir)
	{
	case MD_LEFT:
		MovePlayer(GPlayerX - 1, GPlayerY);
		break;
	case MD_RIGHT:
		MovePlayer(GPlayerX + 1, GPlayerY);
		break;
	case MD_UP:
		MovePlayer(GPlayerX, GPlayerY - 1);
		break;
	case MD_DOWN:
		MovePlayer(GPlayerX, GPlayerY + 1);
		break;

	}
}