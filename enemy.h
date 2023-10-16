#pragma once

class Enemy
{
private:
	int m_Damage;
public:
	Enemy(int damage = 10);
	void virtual Taunt() const;
	void virtual Attack() const;
};