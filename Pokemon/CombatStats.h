#pragma once
struct CombatStats {
    using Stat = size_t;
    Stat health = 0;
    Stat attack = 0;
    Stat defense = 0;
    Stat specialAttack = 0;
    Stat specialDefense = 0;
    Stat speed = 0;
    Stat evasion = 0;
    Stat accuracy = 0;  
};