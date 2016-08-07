#pragma once
#include "IType.h"
namespace Type {
class Ground : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Ground;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Electric,
            TypeName::Fire,
            TypeName::Poison,
            TypeName::Rock,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Electric,
            TypeName::Bug,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Flying,
        };
    }
};
}