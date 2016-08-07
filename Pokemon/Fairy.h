#pragma once
#include "IType.h"
namespace Type {
class Fairy : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Fairy;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Fighting,
            TypeName::Dark,
            TypeName::Dragon,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fire,
            TypeName::Poison,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{

        };
    }
};
}