#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyPartyMemberMetadataDto { 
    std::vector<std::string> positionPref; 
  };
  inline void to_json(json& j, const LolLobbyPartyMemberMetadataDto& v) {
    j["positionPref"] = v.positionPref; 
  }
  inline void from_json(const json& j, LolLobbyPartyMemberMetadataDto& v) {
    v.positionPref = j.at("positionPref").get<std::vector<std::string>>(); 
  }
}