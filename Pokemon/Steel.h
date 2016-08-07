#pragma once
#include "IType.h"
namespace Type {
class Steel : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Steel;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Rock,
            TypeName::Ice,
            TypeName::Fairy,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fire,
            TypeName::Water,
            TypeName::Electric,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{

        };
    }
};
}