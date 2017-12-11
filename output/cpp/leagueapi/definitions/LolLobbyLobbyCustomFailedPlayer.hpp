#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLobbyCustomFailedPlayer { /**/ 
    std::string summonerName;/**/
    uint64_t summonerId;/**/
    std::string reason;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyCustomFailedPlayer& v) { 
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["reason"] = v.reason;
  }
  static void from_json(const json& j, LolLobbyLobbyCustomFailedPlayer& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
} 