#pragma once
#include "INatureWithLinkedStatsAndFlavors.h"
namespace Nature {
class Brave : public INatureWithLinkedStatsAndFlavors {
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Attack;
    }
    virtual CombatStat GetPositivlyAffectedStat() const override {
        return CombatStat::Speed;
    }
};
}