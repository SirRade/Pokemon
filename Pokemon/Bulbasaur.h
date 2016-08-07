#pragma once
#include "ISpecies.h"
namespace Species {
class Bulbasaur : public ISpecies {
    // Identity
    virtual SpeciesName GetName() const override;
    virtual std::unique_ptr<ISpecies> GetPreEvolution() const override;
    virtual std::unique_ptr<ISpecies> GetEvolution() const override;
    virtual std::vector<std::unique_ptr<Type::IType>> GetTypes() const override;

    // Possibilities
    virtual std::vector<AbilityName> GetPossibleAbilities() const override;
    virtual std::unique_ptr<IAbility> GetHiddenAbility() const override;
    virtual std::vector<std::pair<size_t, std::unique_ptr<IMove>>> GetLevelRequierementsForMoves() const override;
    virtual std::vector<std::unique_ptr<MoveMachine>> GetLearnableMachines() const override;
    virtual std::vector<std::pair<double, std::unique_ptr<Item>>> GetChancesToHoldItems() const override;

    // Stats
    virtual std::size_t GetCatchRate() const override;
    virtual std::size_t GetBaseFriendship() const override;
    virtual CombatStats GetBaseStats() const override;

    // Breeding
    virtual bool IsUngendered() const override;
    virtual double GetMaleRatio() const override;
    virtual std::vector<EggGroup> GetEggGroups() const override;
    virtual std::size_t GetHatchStepsMin() const override;
    virtual std::size_t GetHatchStepsMax() const override;


    // Appereance
    virtual double GetSizeMin() const override;
    virtual double GetSizeMax() const override;
    virtual double GetWeightMin() const override;
    virtual double GetWeightMax() const override;
    virtual BodyStyle GetBodyStyle() const override;
    virtual Color GetColor() const override;

    // Leveling
    virtual LevelingRateGroup GetLevelingRateGroup() const override;
    virtual std::size_t GetBaseExpirienceYield() const override;
};
}