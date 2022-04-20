#include "ecs/nomad.h"
#include "MoveSystem.h"
#include <iostream>

namespace rts {
void MoveSystem::init() {}
void MoveSystem::update(int dt) {
  for (auto &entity : registeredEntities) {
    nomad::ComponentHandle<PositionComoponent> position;
    // nomad::ComponentHandle<TargetPositionComponent> target;
    nomad::ComponentHandle<MotionComponent> motion;
    parentWorld->unpack(entity, position, motion);
 
    auto t = dt / 1000.0f;
    position->x += motion->velocityX * t;
    position->y += motion->velocityY * t;

    // Print entity position
    std::cout << "Entity " << entity.id << ": " << position->x << ", " << position->y << std::endl;
  }
}
} // namespace rts