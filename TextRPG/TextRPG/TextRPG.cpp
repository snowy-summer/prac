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

PlayerType playerType;
int hp;
int attack;
int defence;

MonsterType monsterType;
int monsterHp;
int monsterAttack;
int monsterDefence;


void EnterLobby();
void SelectPlayer();
void EnterField();
void RespawnRandomMonster();
void ChoiceHappen();

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
			hp = 150;
			attack = 10;
			defence = 15;
			playerType = PT_Knight;
			break;
		}
		else if (choice == PT_Archer)
		{
			cout << "궁사를 선택했습니다." << endl;
			hp = 100;
			attack = 15;
			defence = 8;
			playerType = PT_Archer;
			break;
		}
		else if (choice == PT_Duruid)
		{
			cout << "드루이드를 선택했습니다." << endl;
			hp = 200;
			attack = 8;
			defence = 15;
			playerType = PT_Duruid;
			break;
		}
		else if (choice == PT_Mage)
		{
			cout << "마법사를 선택했습니다." << endl;
			hp = 150;
			attack = 20;
			defence =3;
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
	cout << "---------------------" << endl;
	cout << "필드에 입장했습니다." << endl;
	cout << "---------------------" << endl;

	cout << "[Player] HP: " << hp << endl;
	cout << "        ATK: " << attack << endl;
	cout << "        DEF: " << defence << endl;
	cout << endl;
	
	
	RespawnRandomMonster();
	ChoiceHappen();

	
}

void RespawnRandomMonster()
{
	cout << "몬스터가 생성 되었습니다." << endl;;
	int randomChoice = 1 + (rand() % 3);

	switch (randomChoice)
	{
		case MT_Slime:

			monsterType = MT_Slime;
			monsterHp = 30;
			monsterAttack = 5;
			monsterDefence = 7;

			cout << "슬라임 생성" << endl;
			cout << "HP: " << monsterHp <<" ATK: "<< monsterAttack << " DEF: " << monsterDefence << endl;
			break;

		case MT_Skeleton:

			monsterType = MT_Skeleton;
			monsterHp = 80;
			monsterAttack = 10;
			monsterDefence = 15;

			cout << "스켈레톤 생성" << endl;
			cout << "HP: " << monsterHp << " ATK: " << monsterAttack << " DEF: " << monsterDefence << endl;
			break;

		case MT_Hornrabbit:

			monsterType = MT_Hornrabbit;
			monsterHp = 50;
			monsterAttack = 20;
			monsterDefence = 5;
			cout << "뿔토끼 생성" << endl;
			cout << "HP: " << monsterHp << " ATK: " << monsterAttack << " DEF: " << monsterDefence << endl;
			break;

	}
}

void ChoiceHappen()
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
	
	}
}
