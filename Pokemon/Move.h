#pragma once
#include "MoveName.h"
class IMove {
protected:
    virtual MoveName GetName() const = 0;
};