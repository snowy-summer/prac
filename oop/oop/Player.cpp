#include "Player.h"
#include <iostream>

using namespace std;

void Player::Attack()
{
	cout << "Attack" << endl;
}

void Player::Die()
{
	cout << "Die" << endl;
}

void Player::HealMe(int value)
{
	_hp += 10;
}
