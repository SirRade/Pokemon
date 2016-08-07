#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Careful : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialDefense;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialAttack;
    }
};
}