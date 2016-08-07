#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Rash : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialAttack;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialDefense;
    }
};
}