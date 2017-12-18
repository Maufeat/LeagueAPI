#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGatekeeperRestrictionDto.hpp"
namespace lol {
  struct LolLobbyQueueRestrictionDto { 
    std::vector<LolLobbyGatekeeperRestrictionDto> gatekeeperRestrictions; 
  };
  inline void to_json(json& j, const LolLobbyQueueRestrictionDto& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions; 
  }
  inline void from_json(const json& j, LolLobbyQueueRestrictionDto& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyGatekeeperRestrictionDto>>(); 
  }
}