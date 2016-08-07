#pragma once
#include "IType.h"
namespace Type {
class Dragon : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Dragon;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Fairy,
        };
    }
};
}