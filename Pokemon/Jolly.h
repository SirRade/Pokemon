#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Jolly : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialAttack;
    }
};
}