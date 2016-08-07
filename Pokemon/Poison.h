#pragma once
#include "IType.h"
namespace Type {
class Poison : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Poison;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Grass,
            TypeName::Fairy,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Poison,
            TypeName::Ground,
            TypeName::Rock,
            TypeName::Ghost,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Steel,
        };
    }
};
}