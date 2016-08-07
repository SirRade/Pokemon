#pragma once
#include "AllCategories.h"

namespace Nature {
template <typename T0, typename T1 , typename T2, typename T3>
class Nat : public T0, public T1, public T2, public T3 {

};

class Timid : public Nat<ISpeedIncreasing, ISpeedReducing, ISpicyDisliking, ISweetLiking> {
};

}