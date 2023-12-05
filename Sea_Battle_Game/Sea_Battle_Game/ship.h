#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship {
private:
    std::string type; // ��� �������
    int health; // ������'� �������
    int damage; // �����, ��� ���� ������� ��������
    // ����� ������ ���� ��������������

public:
    Ship(std::string type, int health, int damage);

    void takeDamage(int amount); // ������� ��� ��������� �����
    bool isSunk() const; // ��������, �� �������� ���������
    void attack(Ship& target); // ����� ������ �������

    // ������� �� ������� ��� ����� ����
    std::string getType() const;
    int getHealth() const;
    int getDamage() const;
    void setHealth(int newHealth);
    // ���� ������...
};

#endif // SHIP_H

