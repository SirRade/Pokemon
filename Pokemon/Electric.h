#pragma once
#include "IType.h"
namespace Type {
class Electric : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Electric;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Water,
            TypeName::Flying,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Grass,
            TypeName::Electric,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Ground,
        };
    }
};
}