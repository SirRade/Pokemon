#include "Bulbasaur.h"
#include "SpeciesFactory.h"
Species::SpeciesName Species::Bulbasaur::GetName() const
{
    return SpeciesName::Bulbasaur;
}

std::unique_ptr<Species::ISpecies> Species::Bulbasaur::GetPreEvolution() const
{
    std::unique_ptr<ISpecies> noPreEvolution = nullptr;
    return noPreEvolution;
}

std::unique_ptr<Species::ISpecies> Species::Bulbasaur::GetEvolution() const
{
    std::unique_ptr<ISpecies> noEvolution = nullptr;
    return noEvolution;
    // return Species::SpeciesFactory::GetSpecies(Species::Ivysaur);
}

std::vector<std::unique_ptr<Type::IType>> Species::Bulbasaur::GetTypes() const
{
    return std::vector<std::unique_ptr<Type::IType>>();
}

std::vector<AbilityName>Species::Bulbasaur::GetPossibleAbilities() const
{
    return std::vector<AbilityName>();
}

std::unique_ptr<IAbility>Species::Bulbasaur::GetHiddenAbility() const
{
    std::unique_ptr<IAbility> noHiddenAbility = nullptr;
    return noHiddenAbility;
}

std::vector<std::pair<size_t, std::unique_ptr<IMove>>>Species::Bulbasaur::GetLevelRequierementsForMoves() const
{
    return std::vector<std::pair<size_t, std::unique_ptr<IMove>>>();
}

std::vector<std::unique_ptr<MoveMachine>>Species::Bulbasaur::GetLearnableMachines() const
{
    return std::vector<std::unique_ptr<MoveMachine>>();
}

std::vector<std::pair<double, std::unique_ptr<Item>>>Species::Bulbasaur::GetChancesToHoldItems() const
{
    return std::vector<std::pair<double, std::unique_ptr<Item>>>();
}

std::size_t Species::Bulbasaur::GetCatchRate() const
{
    return std::size_t();
}

std::size_t Species::Bulbasaur::GetBaseFriendship() const
{
    return std::size_t();
}

CombatStats Species::Bulbasaur::GetBaseStats() const
{
    return CombatStats();
}

bool Species::Bulbasaur::IsUngendered() const
{
    return false;
}

double Species::Bulbasaur::GetMaleRatio() const
{
    return 0.0;
}

std::vector<EggGroup>Species::Bulbasaur::GetEggGroups() const
{
    return std::vector<EggGroup>();
}

std::size_t Species::Bulbasaur::GetHatchStepsMin() const
{
    return std::size_t();
}

std::size_t Species::Bulbasaur::GetHatchStepsMax() const
{
    return std::size_t();
}

double Species::Bulbasaur::GetSizeMin() const
{
    return 0.0;
}

double Species::Bulbasaur::GetSizeMax() const
{
    return 0.0;
}

double Species::Bulbasaur::GetWeightMin() const
{
    return 0.0;
}

double Species::Bulbasaur::GetWeightMax() const
{
    return 0.0;
}

BodyStyle Species::Bulbasaur::GetBodyStyle() const
{
    return BodyStyle();
}

Color Species::Bulbasaur::GetColor() const
{
    return Color();
}

LevelingRateGroup Species::Bulbasaur::GetLevelingRateGroup() const
{
    return LevelingRateGroup();
}

std::size_t Species::Bulbasaur::GetBaseExpirienceYield() const
{
    return std::size_t();
}
