#pragma once
#include "IType.h"
namespace Type {
class Rock : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Rock;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Fire,
            TypeName::Fighting,
            TypeName::Ice,
            TypeName::Bug,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fighting,
            TypeName::Ground,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{

        };
    }
};
}