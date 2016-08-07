#pragma once
#include "IType.h"
namespace Type {
class Flying : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Flying;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Fighting,
            TypeName::Grass,
            TypeName::Bug,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Electric,
            TypeName::Rock,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{

        };
    }
};
}