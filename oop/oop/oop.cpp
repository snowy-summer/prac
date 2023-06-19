#include <iostream>
#include "Player.h"

using namespace std;



class Knight
{
public:

	//생성자 (constructor)
	Knight()
	{
		_hp = 100;
		_atk = 10;
		_def = 3;
	}

	//기타 생성자
	Knight(int hp,int atk, int def)
	{
		_hp = 0;
		_atk = 0;
		_def = 0;
		cout << "knight()" << endl;
	}
	
	//복사 생성자
	Knight(const Knight& other)
	{
		this->_hp = other._hp;
		this->_atk = other._atk;
		this->_def = other._def;
		cout << "Knight(const Knight&)" << endl;
	}

	//소멸자 (destructor)
	~Knight()
	{

	}
	//멤버 함수
	void Attack() { cout << "Attack" << endl; }
	void Die() { cout << "Die" << endl; }
	void HealMe(int value) 
	{
		_hp += 10;
	}

public:
	//멤버 변수
	int _hp;
	int _atk;
	int _def;

};
int main()
{

	Knight k1(100,10,1);
	Knight k2(k1);
	
}