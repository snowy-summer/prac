#include "Map.h"
#include "Helper.h"
#include <iostream>

using namespace std;

int GMap1D[Map_size * Map_size] =
{
	1,1,1,1,1,
	1,0,0,0,1,
	1,0,2,0,1,
	1,0,0,0,1,
	1,1,1,1,1,
};

int GMap2D[Map_size][Map_size] =
{
	{1,1,1,1,1},
	{1,0,0,0,1},
	{1,0,2,0,1},
	{1,0,0,0,1},
	{1,1,1,1,1},
};

void PrintMap1D()
{
	SetCursorPosition(0, 0);
	for (int i = 0; i < Map_size * Map_size; i++)
	{
		switch (GMap1D[i])
		{
		case 0:
			cout << "бс";
			break;
		case 1:
			cout << "бр";
			break;
		case 2:
			cout << "в┴";
			break;
		}

		if ((i + 1) % Map_size == 0)
			cout << endl;
	}
}

void PrintMap2D()
{
	SetCursorPosition(0, 0);

	for (int y = 0; y < Map_size; y++)
	{
		for (int x = 0; x < Map_size; x++)
		{
			switch (GMap2D[y][x])
			{
			case 0:
				cout << "бс";
				break;
			case 1:
				cout << "бр";
				break;
			case 2:
				cout << "в┴";
				break;
			}

		}
			cout << endl;

	}
	
}