#pragma once
#include "IType.h"
namespace Type {
class Grass : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Grass;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Water,
            TypeName::Ground,
            TypeName::Rock,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Poison,
            TypeName::Flying,
            TypeName::Bug,
            TypeName::Fire,
            TypeName::Steel,
            TypeName::Grass,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            
        };
    }
};
}