#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolFeaturedModesQueueGameCategory.hpp>
#include <lol/def/LolFeaturedModesQueueAvailability.hpp>
namespace lol {
  struct LolFeaturedModesQueue { 
    std::string gameMutator;
    uint64_t lastToggledOffTime;
    LolFeaturedModesQueueAvailability queueAvailability;
    int32_t mapId;
    uint64_t lastToggledOnTime;
    std::string gameMode;
    std::string name;
    LolFeaturedModesQueueGameCategory category;
    int32_t id; 
  };
  inline void to_json(json& j, const LolFeaturedModesQueue& v) {
    j["gameMutator"] = v.gameMutator; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["queueAvailability"] = v.queueAvailability; 
    j["mapId"] = v.mapId; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["gameMode"] = v.gameMode; 
    j["name"] = v.name; 
    j["category"] = v.category; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolFeaturedModesQueue& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}