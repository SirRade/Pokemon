#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Relaxed : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Defense;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
};
}