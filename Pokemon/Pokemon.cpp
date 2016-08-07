#include "Pokemon.h"
#include "SpeciesFactory.h"

Pokemon::Pokemon(Species::SpeciesName name) :
    species(Species::SpeciesFactory::GetSpecies(name))
{
}

void Pokemon::Evolve()
{
}
