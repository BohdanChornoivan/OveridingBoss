#pragma once
#include "enemy.h"
class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;
	void virtual Attack() const;
};