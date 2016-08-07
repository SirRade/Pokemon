#pragma once
#include "ItemName.h"
class Item {
protected:
    virtual ItemName GetName() const = 0;
};