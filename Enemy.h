#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "IObserver.h"
#include <iostream>

class Enemy : public IObserver {
public:
    void Notify() override {
        std::cout << "Enemy: Reacting to player's action." << std::endl;
    }
};

#endif 
