#pragma once
#include "ecs/component.h"

namespace rts {
struct TargetPositionComponent: nomad::Component<TargetPositionComponent> {
    float x;
    float y;
};
}