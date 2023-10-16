#include <iostream>
#include "enemy.h"
#include "boss.h"

using namespace std;
int main()
{
	cout << "Enemy object:\n";
	Enemy enemy1;
	enemy1.Taunt();
	enemy1.Attack();
	cout << "\n\nBoss object:\n";
	Boss boss1;
	boss1.Taunt();
	boss1.Attack();
	return 0;
}