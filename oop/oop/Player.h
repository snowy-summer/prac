#pragma once

class Player
{
public:
	//��� �Լ�
	void Attack();
	void Die();
	void HealMe(int value);
	

public:
	//��� ����
	int _hp;
	int _atk;
	int _def;

};

