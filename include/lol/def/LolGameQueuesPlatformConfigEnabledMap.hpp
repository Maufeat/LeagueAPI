#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameQueuesPlatformConfigEnabledMap { 
    int32_t gameMapId;
    int32_t minPlayers; 
  };
  inline void to_json(json& j, const LolGameQueuesPlatformConfigEnabledMap& v) {
    j["gameMapId"] = v.gameMapId; 
    j["minPlayers"] = v.minPlayers; 
  }
  inline void from_json(const json& j, LolGameQueuesPlatformConfigEnabledMap& v) {
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
    v.minPlayers = j.at("minPlayers").get<int32_t>(); 
  }
}