#pragma once
#ifndef IOBSERVER_H
#define IOBSERVER_H

// Interface untuk semua observer
class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void Notify() = 0;
};

#endif
