#pragma once
#include "CombatStat.h"
#include "Flavor.h"
namespace Nature{
class INature {
public:
    virtual CombatStat GetPositivlyAffectedStat() const = 0;
    virtual CombatStat GetNegativelyAffectedStat() const = 0;
    virtual Flavor GetFavoriteFlavor() const = 0;
    virtual Flavor GetDislikedFlavor() const = 0;
};
}