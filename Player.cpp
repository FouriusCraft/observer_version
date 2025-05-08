#include "Player.h"
#include <algorithm>
#include <iostream>

void Player::AddObserver(IObserver* observer) {
    observers.push_back(observer);
}

void Player::RemoveObserver(IObserver* observer) {
    observers.erase(
        std::remove(observers.begin(), observers.end(), observer),
        observers.end()
    );
}

void Player::Attack() {
    std::cout << "Player: Performing action..." << std::endl;
    Notify();
}

void Player::Notify() {
    for (auto* obs : observers) {
        obs->Notify();
    }
}
