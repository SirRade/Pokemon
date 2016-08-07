#pragma once
#include "INature.h"

namespace Nature {
class ISpeedReducing : public INature {
public:
    virtual const CombatStats::Stat& GetNegativelyAffectedStat(const CombatStats& combatStats) const final override {
        return combatStats.speed;
    }
};
}