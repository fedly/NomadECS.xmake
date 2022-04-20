#include "ecs/nomad.h"
// #include <iostream>
// #include <memory>

using namespace nomad;

std::unique_ptr<World> init(int seed) {
  auto entityManager = std::make_unique<EntityManager>();
  auto world = std::make_unique<World>(std::move(entityManager));

  world->init();

  return world;
}

int main() {
  auto world = init(0);

  for (int i = 0; i < 50; i++) {
    world->update(20);
  }
}
