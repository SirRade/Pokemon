#pragma once
#include "Flavor.h"
#include "CombatStat.h"
#include <unordered_map>
namespace Nature {
class CombatStatToFlavorMapper {
public:
    using MapType = std::unordered_map<CombatStat, Flavor>;
    static inline Flavor GetFlavorFromNature(CombatStat stat) {
        return map.at(stat);
    }
private:
    const static MapType map;
    static MapType CreateMap();
};
}