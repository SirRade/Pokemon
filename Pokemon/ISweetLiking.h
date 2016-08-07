#pragma once
#include "INature.h"

namespace Nature {
class ISweetLiking : public INature {
public:
    virtual Flavor GetFavoriteFlavor() const final override {
        return Flavor::Sweet;
    }
};
}