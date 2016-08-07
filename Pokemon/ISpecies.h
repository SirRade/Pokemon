#pragma once
#include <vector>
#include "CombatStats.h"
#include "SpeciesName.h"
#include "EggGroup.h"
#include "IType.h"
#include "Color.h"
#include "BodyStyle.h"
#include "LevelingRateGroup.h"
#include "IAbility.h"
#include "IItem.h"
#include "Move.h"
#include "MoveMachine.h"
#include <memory>
namespace Species {
class ISpecies {
protected:
    // Identity
    virtual SpeciesName GetName() const = 0;
    virtual std::unique_ptr<ISpecies> GetPreEvolution() const = 0;
    virtual std::unique_ptr<ISpecies> GetEvolution() const = 0;
    virtual std::vector<std::unique_ptr<Type::IType>> GetTypes() const = 0;

    // Possibilities
    virtual std::vector<AbilityName> GetPossibleAbilities() const = 0;
    virtual std::unique_ptr<IAbility> GetHiddenAbility() const = 0;
    virtual std::vector<std::pair<size_t, std::unique_ptr<IMove>>> GetLevelRequierementsForMoves() const = 0;
    virtual std::vector<std::unique_ptr<MoveMachine>> GetLearnableMachines() const = 0;
    virtual std::vector<std::pair<double, std::unique_ptr<Item>>> GetChancesToHoldItems() const = 0;

    // Stats
    virtual std::size_t GetCatchRate() const = 0;
    virtual std::size_t GetBaseFriendship() const = 0;
    virtual CombatStats GetBaseStats() const = 0;

    // Breeding
    virtual bool IsUngendered() const = 0;
    virtual double GetMaleRatio() const = 0;
    virtual double GetFemaleRatio() const final;
    virtual std::vector<EggGroup> GetEggGroups() const = 0;
    virtual std::size_t GetHatchStepsMin() const = 0;
    virtual std::size_t GetHatchStepsMax() const = 0;


    // Appereance
    virtual double GetSizeMin() const = 0;
    virtual double GetSizeMax() const = 0;
    virtual double GetWeightMin() const = 0;
    virtual double GetWeightMax() const = 0;
    virtual BodyStyle GetBodyStyle() const = 0;
    virtual Color GetColor() const = 0;

    // Leveling
    virtual LevelingRateGroup GetLevelingRateGroup() const = 0;
    virtual std::size_t GetBaseExpirienceYield() const = 0;
};
}