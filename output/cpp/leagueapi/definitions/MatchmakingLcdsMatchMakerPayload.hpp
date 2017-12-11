#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MatchmakingLcdsMatchMakerPayload { /**/ 
    std::string LEAVER_BUSTER_ACCESS_TOKEN;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsMatchMakerPayload& v) { 
    j["LEAVER_BUSTER_ACCESS_TOKEN"] = v.LEAVER_BUSTER_ACCESS_TOKEN;
  }
  static void from_json(const json& j, MatchmakingLcdsMatchMakerPayload& v) { 
    v.LEAVER_BUSTER_ACCESS_TOKEN = j.at("LEAVER_BUSTER_ACCESS_TOKEN").get<std::string>(); 
  }
} 