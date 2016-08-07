#pragma once
#include "IType.h"
namespace Type {
class Ice : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Ice;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Flying,
            TypeName::Grass,
            TypeName::Ground,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fire,
            TypeName::Water,
            TypeName::Ice,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            
        };
    }
};
}