#pragma once
#include "INature.h"

namespace Nature {
class ISpicyDisliking : public INature {
public:
    virtual Flavor GetDislikedFlavor() const final override {
        return Flavor::Spicy;
    }
};
}