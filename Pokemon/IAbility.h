#pragma once
#include "AbilityName.h"
class IAbility {
protected:
    virtual AbilityName GetName() const = 0;
};