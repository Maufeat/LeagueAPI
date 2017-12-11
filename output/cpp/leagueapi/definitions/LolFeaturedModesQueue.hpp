#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolFeaturedModesQueueAvailability.hpp>
#include <leagueapi/definitions/LolFeaturedModesQueueGameCategory.hpp>

namespace leagueapi {
  struct LolFeaturedModesQueue { /**/ 
    LolFeaturedModesQueueGameCategory category;/**/
    std::string gameMutator;/**/
    uint64_t lastToggledOffTime;/**/
    int32_t id;/**/
    std::string name;/**/
    LolFeaturedModesQueueAvailability queueAvailability;/**/
    int32_t mapId;/**/
    uint64_t lastToggledOnTime;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolFeaturedModesQueue& v) { 
    j["category"] = v.category;
    j["gameMutator"] = v.gameMutator;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["id"] = v.id;
    j["name"] = v.name;
    j["queueAvailability"] = v.queueAvailability;
    j["mapId"] = v.mapId;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolFeaturedModesQueue& v) { 
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 