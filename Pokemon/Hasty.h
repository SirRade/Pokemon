#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Hasty : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Defense;
    }
};
}