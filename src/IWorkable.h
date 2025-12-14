#pragma once
#include <iostream>

class IWorkable {
public:
    virtual ~IWorkable() = default;
    virtual void work() = 0;
};
