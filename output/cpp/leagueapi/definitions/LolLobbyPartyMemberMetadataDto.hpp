#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyPartyMemberMetadataDto { /**/ 
    std::vector<std::string> positionPref;/**/
  };
  static void to_json(json& j, const LolLobbyPartyMemberMetadataDto& v) { 
    j["positionPref"] = v.positionPref;
  }
  static void from_json(const json& j, LolLobbyPartyMemberMetadataDto& v) { 
    v.positionPref = j.at("positionPref").get<std::vector<std::string>>(); 
  }
} 