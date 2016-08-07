#include "CombatStatToFlavorMapper.h"
const Nature::CombatStatToFlavorMapper::MapType Nature::CombatStatToFlavorMapper::map = Nature::CombatStatToFlavorMapper::CreateMap();
Nature::CombatStatToFlavorMapper::MapType Nature::CombatStatToFlavorMapper::CreateMap()
{
    MapType map;
    map[CombatStat::Attack] = Flavor::Spicy;
    map[CombatStat::Speed] = Flavor::Sweet;
    map[CombatStat::Defense] = Flavor::Sour;
    map[CombatStat::SpecialAttack] = Flavor::Dry;
    map[CombatStat::SpecialDefense] = Flavor::Bitter;
    return map;
}
