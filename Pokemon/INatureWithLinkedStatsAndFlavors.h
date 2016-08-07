#pragma once
#include "CombatStatToFlavorMapper.h"
#include "INature.h"
namespace Nature {
class INatureWithLinkedStatsAndFlavors : public INature {
    virtual Flavor GetFavoriteFlavor() const override final {
        return CombatStatToFlavorMapper::GetFlavorFromNature(GetPositivlyAffectedStat());
    };
    virtual Flavor GetDislikedFlavor() const override final {
        return CombatStatToFlavorMapper::GetFlavorFromNature(GetNegativelyAffectedStat());
    };
};
}