#pragma once
#ifndef UI_H
#define UI_H

#include "IObserver.h"
#include <iostream>

class UI : public IObserver {
public:
    void Notify() override {
        std::cout << "UI: Enemy HP Updated." << std::endl;
    }
};

#endif 
