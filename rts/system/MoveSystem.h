#pragma once
#include "ecs/system.h"
#include "component/PositionComponent.h"
#include "component/TargetPositionComponent.h"
#include "component/MotionComponent.h"

namespace rts {
class MoveSystem : public nomad::System {
public:
  MoveSystem() {
    signature.addComponent<PositionComoponent>();
    // signature.addComponent<TargetPositionComponent>();
    signature.addComponent<MotionComponent>();
  }

  void init() override;

  void update(int dt) override;
};
}