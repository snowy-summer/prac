#include "Player.h"
#include "Map.h"

int GPlayerX =2;
int GPlayerY =2;
void MovePlayer(int x, int y)
{
	//���� üũ

	if (x < 0 || x >= Map_size)
		return;
	if (y < 0 || y >= Map_size)
		return;

	//�� üũ
	int index = y * Map_size + x;
	if (GMap1D[index] == 1)
		return;

	//���� ��ġ ����
	{
		int index = GPlayerY * Map_size + GPlayerX;
		GMap1D[index] = 0;
	}


	//�� ��ġ �̵�


	{
		GPlayerX = x;
		GPlayerY = y;
		int index = GPlayerY * Map_size + GPlayerX;
		GMap1D[index] = 2;
	}

}