#include "ecs/nomad.h"
#include <iostream>
#include <memory>
#include "system/MoveSystem.h"

using namespace nomad;

std::unique_ptr<World> init(int seed) {
  auto entityManager = std::make_unique<EntityManager>();
  auto world = std::make_unique<World>(std::move(entityManager));

  world->addSystem(std::make_unique<rts::MoveSystem>());
  world->init();

  auto egg = world->createEntity();
  egg.addComponent(rts::PositionComoponent());
  egg.addComponent(rts::MotionComponent(1, 2));

  return world;
}

int main() {
  auto world = init(0);

  for (int i = 0; i < 150; i++) {
    world->update(33);
  }
}
