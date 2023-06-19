#pragma once

class Player
{
public:
	//¸â¹ö ÇÔ¼ö
	void Attack();
	void Die();
	void HealMe(int value);
	

public:
	//¸â¹ö º¯¼ö
	int _hp;
	int _atk;
	int _def;

};

