#include <iostream>

using namespace std;

enum PlayerType
{
	PT_None = 0,
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Duruid = 3,
	PT_Mage = 4,
};

enum MonsterType
{
	MT_Slime = 1,
	MT_Skeleton = 2,
	MT_Hornrabbit = 3,
};

struct Statinfo
{
	int hp;
	int attack;
	int defence;
};

PlayerType playerType;
Statinfo playerStat;

MonsterType monsterType;
Statinfo monsterStat;



void EnterLobby();
void SelectPlayer();
void EnterField();
void RespawnRandomMonster();
void ChoiceHappen();
void EnterBattle();
void WaitForNextKey();

int main()
{
	srand(time(0));
	EnterLobby();



}

void EnterLobby()
{
	while (true)
	{
		cout << "--------------------------------" << endl;
		cout << " 로비에 입장했습니다! " << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		//플레이어 직업 선택
		SelectPlayer();
		
		cout << "--------------------------------" << endl;
		cout << " (1) 시작 (2) 재선택 (3) 게임종료 " << endl;
		cout << "--------------------------------" << endl;
		cout << endl;

		int input;
		cin >> input;
		if (input == 1)
		{
			cout << " 여행을 떠납니다." << endl;
			EnterField();
			return;
		}
		else if (input == 2)
		{
			SelectPlayer();
		}
		else
		{
			return;
		}
	
	}
	
	

}

void SelectPlayer()
{
	while (true)
	{
		cout << "--------------------------------" << endl;
		cout << "  직업을 골라주세요! " << endl;
		cout << "  (1) 기사 (2) 궁사 (3) 드루이드 (4) 마법사 " << endl;
		cout << "> ";

		int choice;
		cin >> choice;
		cout << endl;

		if (choice == PT_Knight)
		{
			cout << "기사를 선택했습니다." << endl;
			playerStat.hp = 150;
			playerStat.attack = 10;
			playerStat.defence = 15;
			playerType = PT_Knight;
			break;
		}
		else if (choice == PT_Archer)
		{
			cout << "궁사를 선택했습니다." << endl;
			playerStat.hp = 100;
			playerStat.attack = 15;
			playerStat.defence = 8;
			playerType = PT_Archer;
			break;
		}
		else if (choice == PT_Duruid)
		{
			cout << "드루이드를 선택했습니다." << endl;
			playerStat.hp = 200;
			playerStat.attack = 8;
			playerStat.defence = 15;
			playerType = PT_Duruid;
			break;
		}
		else if (choice == PT_Mage)
		{
			cout << "마법사를 선택했습니다." << endl;
			playerStat.hp = 150;
			playerStat.attack = 20;
			playerStat.defence =3;
			playerType = PT_Mage;
			break;
		}
		else
		{
			cout << " 잘못 선택했습니다. 다시 고르세요" << endl;
		}
	}
	
}

void EnterField()
{
	while (true)
	{
		cout << "---------------------" << endl;
		cout << "필드에 입장했습니다." << endl;
		cout << "---------------------" << endl;

		cout << "[Player] HP: " << playerStat.hp << endl;
		cout << "        ATK: " << playerStat.attack << endl;
		cout << "        DEF: " << playerStat.defence << endl;
		cout << endl;


		RespawnRandomMonster();
		ChoiceHappen();
		WaitForNextKey();

	}
	
	
}

void RespawnRandomMonster()
{
	cout << "몬스터가 생성 되었습니다." << endl;;
	int randomChoice = 1 + (rand() % 3);

	switch (randomChoice)
	{
		case MT_Slime:

			monsterType = MT_Slime;
			monsterStat.hp = 30;
			monsterStat.attack = 5;
			monsterStat.defence = 7;

			cout << "슬라임 생성" << endl;
			cout << "HP: " << monsterStat.hp <<" ATK: "<< monsterStat.attack << " DEF: " << monsterStat.defence << endl;
			break;

		case MT_Skeleton:

			monsterType = MT_Skeleton;
			monsterStat.hp = 80;
			monsterStat.attack = 10;
			monsterStat.defence = 15;

			cout << "스켈레톤 생성" << endl;
			cout << "HP: " << monsterStat.hp << " ATK: " << monsterStat.attack << " DEF: " << monsterStat.defence << endl;
			break;

		case MT_Hornrabbit:

			monsterType = MT_Hornrabbit;
			monsterStat.hp = 50;
			monsterStat.attack = 20;
			monsterStat.defence = 5;
			cout << "뿔토끼 생성" << endl;
			cout << "HP: " << monsterStat.hp << " ATK: " << monsterStat.attack << " DEF: " << monsterStat.defence << endl;
			break;

	}
}

void ChoiceHappen()
{
	while (true)
	{
		cout << endl;
		cout << "--------------------------------" << endl;
		cout << "  행동을 고르세요 " << endl;
		cout << "  (1) 전투 (2) 도망 " << endl;
		cout << "> ";

		int input = 0;
		cin >> input;
		if (input == 1)
		{
			EnterBattle();
			if (monsterStat.hp == 0)
			{
				cout << "몬스터를 처치했습니다." << endl;
				
				return;
			}
			if (playerStat.hp == 0)
			{
				cout << "쓰러졌습니다" << endl;
				cout << " Game Over " << endl;
				
				return;
			}
		}
		else
		{
			int randomEscape = 1 + (rand() % 2);
			switch (randomEscape)
			{
			case 1:
				cout << "성공적으로 도망칩니다." << endl;
				break;

			case 2:
				cout << " 도망에 실패합니다." << endl;
				break;
			}
			return;
		}
	}
	
}

void EnterBattle()
{
	
		int playerdamage = playerStat.attack - monsterStat.defence;
		int monsterdamage = monsterStat.attack - playerStat.defence;
		if (playerdamage < 0)
		{
			playerdamage = 0;
		}
		monsterStat.hp -= playerdamage;
		if (monsterStat.hp < 0)
		{
			monsterStat.hp = 0;
		}

		cout << "몬스터의 남은 체력: " << monsterStat.hp << endl;

		//반격
		if (monsterdamage < 0)
		{
			monsterdamage = 0;
		}
		playerStat.hp -= monsterdamage;
		if (playerStat.hp < 0)
		{
			playerStat.hp = 0;
		}
		cout << "플레이어의 남은 체력: " << playerStat.hp << endl;

	
}

void WaitForNextKey()
{
	cout << "계속하려면 1을 눌러주세요" << endl;
	cout << ">";

	int input;
	cin >> input;

	system("cls");
}
