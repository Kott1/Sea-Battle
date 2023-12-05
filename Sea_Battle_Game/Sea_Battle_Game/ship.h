#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship {
private:
    std::string type; // Тип корабля
    int health; // Здоров'я корабля
    int damage; // Шкода, яку може завдати корабель
    // Можна додати інші характеристики

public:
    Ship(std::string type, int health, int damage);

    void takeDamage(int amount); // Функція для отримання шкоди
    bool isSunk() const; // Перевірка, чи корабель потоплено
    void attack(Ship& target); // Атака іншого корабля

    // Геттери та сеттери для різних полів
    std::string getType() const;
    int getHealth() const;
    int getDamage() const;
    void setHealth(int newHealth);
    // Інші методи...
};

#endif // SHIP_H

