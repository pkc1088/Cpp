#include <iostream>

using namespace std;

class Tower {
public:
	int height;
	Tower();
	Tower(int height);
	int getHeight();
};

Tower::Tower() : height(1)
{}

Tower::Tower(int height)
{
	this->height = height;
}

int Tower::getHeight()
{
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
	return 0;
}
