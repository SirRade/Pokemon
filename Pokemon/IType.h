#pragma once
#include <vector>
#include "TypeName.h"
namespace Type {
class IType {
    public:
        using TypeNames = std::vector<TypeName>;
        enum class Effectiveness {
            Normal,
            VeryEffective,
            Weak,
            CompletelyIneffective
        };
        virtual Effectiveness GetEffectivenessAgainst(IType* other) const final;
        virtual TypeNames GetTypesEffectiveAgainst() const = 0;
        virtual TypeNames GetTypesWeakAgainst() const = 0;
        virtual TypeNames GetTypesIneffectiveAgainst() const = 0;

    protected:
        virtual TypeName GetType() const = 0;
};
}