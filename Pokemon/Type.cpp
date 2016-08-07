#include "IType.h"

Type::IType::Effectiveness Type::IType::GetEffectivenessAgainst(IType * other) const
{
    for (const auto & type : GetTypesEffectiveAgainst()) {
        if (type == other->GetType()) {
            return Effectiveness::VeryEffective;
        }
    }
    for (const auto & type : GetTypesWeakAgainst()) {
        if (type == other->GetType()) {
            return Effectiveness::Weak;
        }
    }
    for (const auto & type : GetTypesIneffectiveAgainst()) {
        if (type == other->GetType()) {
            return Effectiveness::CompletelyIneffective;
        }
    }
    return Effectiveness::Normal;
}
