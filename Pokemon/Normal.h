#pragma once
#include "IType.h"
namespace Type {
class Normal : public IType {
public:
    virtual TypeName GetType() const override {
        return TypeName::Normal;
    }

    virtual TypeNames GetTypesEffectiveAgainst() const override {
        return{
            
        };
    }

    virtual TypeNames GetTypesWeakAgainst() const override {
        return{
            TypeName::Rock,
            TypeName::Steel,
        };
    }

    virtual TypeNames GetTypesIneffectiveAgainst() const override {
        return{
            TypeName::Ghost,
        };
    }
};
}