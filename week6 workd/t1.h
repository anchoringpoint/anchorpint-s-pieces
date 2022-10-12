#pragma once
#include<bits/stdc++.h>
using namespace std;
class enemy {
public:
	int hp;
	int armor;
	int attack;
	enemy(int x = 0, int y = 0, int z = 0)
	{
		hp = x;
		armor = y;
		attack = z;
	}
	virtual int hurt( int x,int y)const = 0;
};

class enemy1 :public enemy
{
public:
	enemy1(int x = 0, int y = 0, int z = 0) : enemy() {};
	 int hurt(const int x, const int y)const  override
	{
		int t = 9;
		 t -= (x + y);
		return t;
	}
};

enemy1 operator +(enemy1 x, enemy1 y)
{
	x.hp += y.hp;
	return x;
}
