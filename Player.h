#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "IObserver.h"

class Player {
public:
    void AddObserver(IObserver* observer);
    void RemoveObserver(IObserver* observer);
    void Attack();
private:
    void Notify();
    std::vector<IObserver*> observers;
};

#endif 
