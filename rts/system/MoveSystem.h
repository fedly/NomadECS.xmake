#pragma once
#include "ecs/system.h"
#include "../component/PositionComponent.h"

namespace rts {
class MoveSystem : public nomad::System {
public:
  MoveSystem() {
    signature.addComponent<PositionComoponent>();
  }

  void init() override;

  void update(int dt) override;
};
}