#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyGatekeeperRestrictionDto.hpp>
namespace lol {
  struct LolLobbyQueueRestrictionDto { 
    std::vector<LolLobbyGatekeeperRestrictionDto> gatekeeperRestrictions; 
  };
  void to_json(json& j, const LolLobbyQueueRestrictionDto& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions; 
  }
  void from_json(const json& j, LolLobbyQueueRestrictionDto& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyGatekeeperRestrictionDto>>(); 
  }
}