#pragma once
#include "ecs/component.h"

namespace rts {
struct PositionComoponent: nomad::Component<PositionComoponent> {
    float x;
    float y;
    float z;
};
}