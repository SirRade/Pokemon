#pragma once
#include "IType.h"
namespace Type {
class Ghost : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Ghost;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            TypeName::Psychic,
            TypeName::Ghost,
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Dark,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Normal,
        };
    }
};
}