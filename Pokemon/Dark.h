#pragma once
#include "IType.h"
namespace Type {
class Dark : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Dark;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Ghost,
            TypeName::Psychic
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Fighting,
            TypeName::Dark,
            TypeName::Fairy
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{

        };
    }
};
}