#pragma once
#include <iostream>

class IFeedable {
public:
    virtual ~IFeedable() = default;
    virtual void eat() = 0;
};
