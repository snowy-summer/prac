#include <iostream>
#include "Player.h"

using namespace std;



class Knight
{
public:

	//������ (constructor)
	Knight()
	{
		_hp = 100;
		_atk = 10;
		_def = 3;
	}

	//��Ÿ ������
	Knight(int hp,int atk, int def)
	{
		_hp = 0;
		_atk = 0;
		_def = 0;
		cout << "knight()" << endl;
	}
	
	//���� ������
	Knight(const Knight& other)
	{
		this->_hp = other._hp;
		this->_atk = other._atk;
		this->_def = other._def;
		cout << "Knight(const Knight&)" << endl;
	}

	//�Ҹ��� (destructor)
	~Knight()
	{

	}
	//��� �Լ�
	void Attack() { cout << "Attack" << endl; }
	void Die() { cout << "Die" << endl; }
	void HealMe(int value) 
	{
		_hp += 10;
	}

public:
	//��� ����
	int _hp;
	int _atk;
	int _def;

};
int main()
{

	Knight k1(100,10,1);
	Knight k2(k1);
	
}