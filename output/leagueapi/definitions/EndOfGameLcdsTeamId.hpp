#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsTeamId { /**/ 
    std::string fullId;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsTeamId& v) { 
    j["fullId"] = v.fullId;
  }
  static void from_json(const json& j, EndOfGameLcdsTeamId& v) { 
    v.fullId = j.at("fullId").get<std::string>(); 
  }
} 