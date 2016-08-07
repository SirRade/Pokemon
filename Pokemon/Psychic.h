#pragma once
#include "IType.h"
namespace Type {
class Psychic : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Psychic;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Fighting,
            TypeName::Poison,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Psychic,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Dark,
        };
    }
};
}