#include "Ship.h"

Ship::Ship(std::string type, int health, int damage)
    : type(type), health(health), damage(damage) {}

void Ship::takeDamage(int amount) {
    health -= amount;
    if (health < 0) {
        health = 0;
    }
}

bool Ship::isSunk() const {
    return health <= 0;
}

void Ship::attack(Ship& target) {
    target.takeDamage(damage);
}

std::string Ship::getType() const {
    return type;
}

int Ship::getHealth() const {
    return health;
}

int Ship::getDamage() const {
    return damage;
}

void Ship::setHealth(int newHealth) {
    health = newHealth;
    if (health < 0) {
        health = 0;
    }
}
