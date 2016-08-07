#pragma once
#include "IType.h"
namespace Type {
class Bug : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Bug;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return {
            TypeName::Grass,
            TypeName::Psychic,
            TypeName::Dark
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return {
            TypeName::Fighting,
            TypeName::Flying,
            TypeName::Poison,
            TypeName::Ghost,
            TypeName::Steel,
            TypeName::Fire
        };
    }
        
    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return {
       
        };
    }
};
}