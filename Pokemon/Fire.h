#pragma once
#include "IType.h"
namespace Type {
class Fire : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Fire;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Grass,
            TypeName::Ice,
            TypeName::Bug,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fire,
            TypeName::Water,
            TypeName::Rock,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            
        };
    }
};
}