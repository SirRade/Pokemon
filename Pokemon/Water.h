#pragma once
#include "IType.h"
namespace Type {
class Water : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Water;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return {
            TypeName::Fire,
            TypeName::Ground,
            TypeName::Rock,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return {
            TypeName::Water,
            TypeName::Grass,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return {

        };
    }
};
}