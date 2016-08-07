#pragma once
#include <vector>
#include "SpeciesName.h"
#include "CombatStats.h"
#include "ISpecies.h"
#include "Gender.h"
#include "IAbility.h"
#include "INature.h"

class Pokemon {
    public:
        Pokemon(Species::SpeciesName name);

    private:
        void Evolve();

    private:
        std::unique_ptr<Species::ISpecies> species;
        std::vector<std::unique_ptr<IMove>> moves;
        std::vector<std::unique_ptr<IAbility>> abilities;
        std::vector<std::unique_ptr<Nature::INature>> natures;
        CombatStats combatStats;
        std::size_t level = 0;
        Gender gender;
};