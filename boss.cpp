#include <iostream>
#include <string>
#include "boss.h"

Boss::Boss(int damage):
	Enemy(damage)
{}

void Boss::Taunt() const
{
	std::cout << "The boss says he will end your pitiful existence." << std::endl;
}

void Boss::Attack() const
{
	Enemy::Attack();
	std::cout << " And laughs heartily at you. \n";
}