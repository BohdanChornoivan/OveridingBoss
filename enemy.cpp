#include "enemy.h"
#include <string>
#include <iostream>

Enemy::Enemy(int damage):
	m_Damage(damage)
{}

void Enemy::Taunt() const
{
	std::cout << "The enemy says he will you fight you." << std::endl;
}

void Enemy::Attack() const
{
	std::cout << "Attack! Inflicts " << m_Damage << " damage points.";
}