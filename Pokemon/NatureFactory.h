#pragma once
#include "Nature.h"
#include "NatureName.h"
namespace NatureAndFlavor {
class NatureFactury {
    static Nature GetNature(NatureName name) {
        (size_t)name / (size_t)(CombatStat::NumberOfCombatStats)
        switch (name)
        {
            case NatureName::Hardy:
                break;
            case NatureName::Docile:
                break;
            case NatureName::Serious:
                break;
            case NatureName::Bashful:
                break;
            case NatureName::Quirky:
                break;
            case NatureName::Timid:
                break;
            case NatureName::Hasty:
                break;
            case NatureName::Jolly:
                break;
            case NatureName::Naive:
                break;
            case NatureName::Lonely:
                break;
            case NatureName::Brave:
                break;
            case NatureName::Adamant:
                break;
            case NatureName::Naughty:
                break;
            case NatureName::Bold:
                break;
            case NatureName::Relaxed:
                break;
            case NatureName::Impish:
                break;
            case NatureName::Lax:
                break;
            case NatureName::Modest:
                break;
            case NatureName::Mild:
                break;
            case NatureName::Quiet:
                break;
            case NatureName::Rash:
                break;
            case NatureName::Calm:
                break;
            case NatureName::Gentle:
                break;
            case NatureName::Sassy:
                break;
            case NatureName::Careful:
                break;
            default:
                //zhrow std::invalid_argument("Tryin");
                break;
        }
    }
};
}