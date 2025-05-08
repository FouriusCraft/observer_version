#pragma once
#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include <iostream>

class ScoreSystem : public IObserver {
public:
    void Notify() override {
        std::cout << "ScoreSystem: Incrementing score." << std::endl;
    }
};

#endif 
