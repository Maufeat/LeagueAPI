#pragma once
#include "../base_def.hpp" 
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace lol {
  struct LolFeaturedModesQueue { 
    int32_t id;
    int32_t mapId;
    std::string name;
    std::string gameMode;
    std::string gameMutator;
    LolFeaturedModesQueueGameCategory category;
    uint64_t lastToggledOffTime;
    uint64_t lastToggledOnTime;
    LolFeaturedModesQueueAvailability queueAvailability; 
  };
  inline void to_json(json& j, const LolFeaturedModesQueue& v) {
    j["id"] = v.id; 
    j["mapId"] = v.mapId; 
    j["name"] = v.name; 
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["category"] = v.category; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["queueAvailability"] = v.queueAvailability; 
  }
  inline void from_json(const json& j, LolFeaturedModesQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability>(); 
  }
}