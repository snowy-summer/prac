#include "Player.h"
#include "Map.h"

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