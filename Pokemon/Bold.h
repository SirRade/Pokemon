#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Bold : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Defense;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Attack;
    }
};
}