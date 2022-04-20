#pragma once
#include "ecs/component.h"

namespace rts {
struct MotionComponent : nomad::Component<MotionComponent> {
  MotionComponent(float x, float y) : velocityX(x), velocityY(y) {}
  float velocityX;
  float velocityY;
};
} // namespace rts