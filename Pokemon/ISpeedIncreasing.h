#pragma once
#include "INature.h"

namespace Nature {
class ISpeedIncreasing : public INature {
    public:
        virtual const CombatStats::Stat& GetPositivlyAffectedStat(const CombatStats& combatStats) const final override {
            return combatStats.speed;
        }
};
}