#pragma once
#include "IType.h"
namespace Type {
class Fighting : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Fighting;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Normal,
            TypeName::Steel,
            TypeName::Rock,
            TypeName::Dark,
            TypeName::Ice
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Flying,
            TypeName::Poison,
            TypeName::Bug,
            TypeName::Fairy,
            TypeName::Psychic
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Ghost,
        };
    }
};
}