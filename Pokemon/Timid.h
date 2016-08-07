#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Timid : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Attack;
    }
};
}