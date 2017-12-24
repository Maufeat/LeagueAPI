#pragma once
#include "../base_def.hpp" 
#include "LolFeaturedModesQueueAvailability.hpp"
#include "LolFeaturedModesQueueGameCategory.hpp"
namespace lol {
  struct LolFeaturedModesQueue { 
    std::string gameMutator;
    int32_t mapId;
    LolFeaturedModesQueueGameCategory category;
    std::string gameMode;
    std::string name;
    int32_t id;
    uint64_t lastToggledOnTime;
    LolFeaturedModesQueueAvailability queueAvailability;
    uint64_t lastToggledOffTime; 
  };
  inline void to_json(json& j, const LolFeaturedModesQueue& v) {
    j["gameMutator"] = v.gameMutator; 
    j["mapId"] = v.mapId; 
    j["category"] = v.category; 
    j["gameMode"] = v.gameMode; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["queueAvailability"] = v.queueAvailability; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
  }
  inline void from_json(const json& j, LolFeaturedModesQueue& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
  }
}