#include "ISpecies.h"

double Species::ISpecies::GetFemaleRatio() const {
    {
        if (IsUngendered()) {
            return 0.0;
        }
        return 100.0 - GetMaleRatio();
    }
}
