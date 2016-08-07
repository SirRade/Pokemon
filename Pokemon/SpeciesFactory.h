#pragma once
#include "SpeciesName.h"
#include "AllSpecies.h"

namespace Species {
class SpeciesFactory {
public:
    static std::unique_ptr<ISpecies> GetSpecies(SpeciesName name) {
        switch (name)
        {
            case Species::SpeciesName::Bulbasaur:
                return std::make_unique<Bulbasaur>();
                break;
            case Species::SpeciesName::Ivysaur:
                break;
            case Species::SpeciesName::Venusaur:
                break;
            case Species::SpeciesName::Charmander:
                break;
            case Species::SpeciesName::Charmeleon:
                break;
            case Species::SpeciesName::Charizard:
                break;
            case Species::SpeciesName::Squirtle:
                break;
            case Species::SpeciesName::Wartortle:
                break;
            case Species::SpeciesName::Blastoise:
                break;
            case Species::SpeciesName::Caterpie:
                break;
            case Species::SpeciesName::Metapod:
                break;
            case Species::SpeciesName::Butterfree:
                break;
            case Species::SpeciesName::Weedle:
                break;
            case Species::SpeciesName::Kakuna:
                break;
            case Species::SpeciesName::Beedrill:
                break;
            case Species::SpeciesName::Pidgey:
                break;
            case Species::SpeciesName::Pidgeotto:
                break;
            case Species::SpeciesName::Pidgeot:
                break;
            case Species::SpeciesName::Rattata:
                break;
            case Species::SpeciesName::Raticate:
                break;
            case Species::SpeciesName::Spearow:
                break;
            case Species::SpeciesName::Fearow:
                break;
            case Species::SpeciesName::Ekans:
                break;
            case Species::SpeciesName::Arbok:
                break;
            case Species::SpeciesName::Pikachu:
                break;
            case Species::SpeciesName::Raichu:
                break;
            case Species::SpeciesName::Sandshrew:
                break;
            case Species::SpeciesName::Sandslash:
                break;
            case Species::SpeciesName::NidoranFemale:
                break;
            case Species::SpeciesName::Nidorina:
                break;
            case Species::SpeciesName::Nidoqueen:
                break;
            case Species::SpeciesName::NidoranMale:
                break;
            case Species::SpeciesName::Nidorino:
                break;
            case Species::SpeciesName::Nidoking:
                break;
            case Species::SpeciesName::Clefairy:
                break;
            case Species::SpeciesName::Clefable:
                break;
            case Species::SpeciesName::Vulpix:
                break;
            case Species::SpeciesName::Ninetales:
                break;
            case Species::SpeciesName::Jigglypuff:
                break;
            case Species::SpeciesName::Wigglytuff:
                break;
            case Species::SpeciesName::Zubat:
                break;
            case Species::SpeciesName::Golbat:
                break;
            case Species::SpeciesName::Oddish:
                break;
            case Species::SpeciesName::Gloom:
                break;
            case Species::SpeciesName::Vileplume:
                break;
            case Species::SpeciesName::Paras:
                break;
            case Species::SpeciesName::Parasect:
                break;
            case Species::SpeciesName::Venonat:
                break;
            case Species::SpeciesName::Venomoth:
                break;
            case Species::SpeciesName::Diglett:
                break;
            case Species::SpeciesName::Dugtrio:
                break;
            case Species::SpeciesName::Meowth:
                break;
            case Species::SpeciesName::Persian:
                break;
            case Species::SpeciesName::Psyduck:
                break;
            case Species::SpeciesName::Golduck:
                break;
            case Species::SpeciesName::Mankey:
                break;
            case Species::SpeciesName::Primeape:
                break;
            case Species::SpeciesName::Growlithe:
                break;
            case Species::SpeciesName::Arcanine:
                break;
            case Species::SpeciesName::Poliwag:
                break;
            case Species::SpeciesName::Poliwhirl:
                break;
            case Species::SpeciesName::Poliwrath:
                break;
            case Species::SpeciesName::Abra:
                break;
            case Species::SpeciesName::Kadabra:
                break;
            case Species::SpeciesName::Alakazam:
                break;
            case Species::SpeciesName::Machop:
                break;
            case Species::SpeciesName::Machoke:
                break;
            case Species::SpeciesName::Machamp:
                break;
            case Species::SpeciesName::Bellsprout:
                break;
            case Species::SpeciesName::Weepinbell:
                break;
            case Species::SpeciesName::Victreebel:
                break;
            case Species::SpeciesName::Tentacool:
                break;
            case Species::SpeciesName::Tentacruel:
                break;
            case Species::SpeciesName::Geodude:
                break;
            case Species::SpeciesName::Graveler:
                break;
            case Species::SpeciesName::Golem:
                break;
            case Species::SpeciesName::Ponyta:
                break;
            case Species::SpeciesName::Rapidash:
                break;
            case Species::SpeciesName::Slowpoke:
                break;
            case Species::SpeciesName::Slowbro:
                break;
            case Species::SpeciesName::Magnemite:
                break;
            case Species::SpeciesName::Magneton:
                break;
            case Species::SpeciesName::Farfetchd:
                break;
            case Species::SpeciesName::Doduo:
                break;
            case Species::SpeciesName::Dodrio:
                break;
            case Species::SpeciesName::Seel:
                break;
            case Species::SpeciesName::Dewgong:
                break;
            case Species::SpeciesName::Grimer:
                break;
            case Species::SpeciesName::Muk:
                break;
            case Species::SpeciesName::Shellder:
                break;
            case Species::SpeciesName::Cloyster:
                break;
            case Species::SpeciesName::Gastly:
                break;
            case Species::SpeciesName::Haunter:
                break;
            case Species::SpeciesName::Gengar:
                break;
            case Species::SpeciesName::Onix:
                break;
            case Species::SpeciesName::Drowzee:
                break;
            case Species::SpeciesName::Hypno:
                break;
            case Species::SpeciesName::Krabby:
                break;
            case Species::SpeciesName::Kingler:
                break;
            case Species::SpeciesName::Voltorb:
                break;
            case Species::SpeciesName::Electrode:
                break;
            case Species::SpeciesName::Exeggcute:
                break;
            case Species::SpeciesName::Exeggutor:
                break;
            case Species::SpeciesName::Cubone:
                break;
            case Species::SpeciesName::Marowak:
                break;
            case Species::SpeciesName::Hitmonlee:
                break;
            case Species::SpeciesName::Hitmonchan:
                break;
            case Species::SpeciesName::Lickitung:
                break;
            case Species::SpeciesName::Koffing:
                break;
            case Species::SpeciesName::Weezing:
                break;
            case Species::SpeciesName::Rhyhorn:
                break;
            case Species::SpeciesName::Rhydon:
                break;
            case Species::SpeciesName::Chansey:
                break;
            case Species::SpeciesName::Tangela:
                break;
            case Species::SpeciesName::Kangaskhan:
                break;
            case Species::SpeciesName::Horsea:
                break;
            case Species::SpeciesName::Seadra:
                break;
            case Species::SpeciesName::Goldeen:
                break;
            case Species::SpeciesName::Seaking:
                break;
            case Species::SpeciesName::Staryu:
                break;
            case Species::SpeciesName::Starmie:
                break;
            case Species::SpeciesName::MrMime:
                break;
            case Species::SpeciesName::Scyther:
                break;
            case Species::SpeciesName::Jynx:
                break;
            case Species::SpeciesName::Electabuzz:
                break;
            case Species::SpeciesName::Magmar:
                break;
            case Species::SpeciesName::Pinsir:
                break;
            case Species::SpeciesName::Tauros:
                break;
            case Species::SpeciesName::Magikarp:
                break;
            case Species::SpeciesName::Gyarados:
                break;
            case Species::SpeciesName::Lapras:
                break;
            case Species::SpeciesName::Ditto:
                break;
            case Species::SpeciesName::Eevee:
                break;
            case Species::SpeciesName::Vaporeon:
                break;
            case Species::SpeciesName::Jolteon:
                break;
            case Species::SpeciesName::Flareon:
                break;
            case Species::SpeciesName::Porygon:
                break;
            case Species::SpeciesName::Omanyte:
                break;
            case Species::SpeciesName::Omastar:
                break;
            case Species::SpeciesName::Kabuto:
                break;
            case Species::SpeciesName::Kabutops:
                break;
            case Species::SpeciesName::Aerodactyl:
                break;
            case Species::SpeciesName::Snorlax:
                break;
            case Species::SpeciesName::Articuno:
                break;
            case Species::SpeciesName::Zapdos:
                break;
            case Species::SpeciesName::Moltres:
                break;
            case Species::SpeciesName::Dratini:
                break;
            case Species::SpeciesName::Dragonair:
                break;
            case Species::SpeciesName::Dragonite:
                break;
            case Species::SpeciesName::Mewtwo:
                break;
            case Species::SpeciesName::Mew:
                break;
            default:
                throw std::invalid_argument("Tried to create invalid Pokemon");
                break;
        }
    }
};
}