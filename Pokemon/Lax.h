#pragma once
#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Lax : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Defense;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialDefense;
    }
};
}