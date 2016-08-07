#pragma once
#include "CombatStatToFlavorMapper.h"
#include "NatureName.h"
namespace NatureAndFlavor {
class Nature {
public: 
    Nature(CombatStat positivelyAffectedStat, CombatStat negativelyAffectedStat) :
        positivelyAffectedStat(positivelyAffectedStat),
        negativelyAffectedStat(negativelyAffectedStat) {
    }
    CombatStat GetPositivlyAffectedStat() const {
        return positivelyAffectedStat;
    }
    CombatStat GetNegativelyAffectedStat() const {
        return negativelyAffectedStat;
    }
    Flavor GetFavoriteFlavor() const {
        return CombatStatToFlavorMapper::GetFlavorFromNature(GetPositivlyAffectedStat());
    };
    Flavor GetDislikedFlavor() const {
        return CombatStatToFlavorMapper::GetFlavorFromNature(GetNegativelyAffectedStat());
    };
    NatureName Getname() const {
        return name;
    }
private:
    NatureName name;
    CombatStat positivelyAffectedStat;
    CombatStat negativelyAffectedStat;
};
}