#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Sassy : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::SpecialDefense;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
};
}