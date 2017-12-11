#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatTeamPlayerEntry { /**/ 
    std::string summonerInternalName;/**/
    uint64_t summonerId;/**/
    std::string summonerName;/**/
  };
  static void to_json(json& j, const LolChatTeamPlayerEntry& v) { 
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }
  static void from_json(const json& j, LolChatTeamPlayerEntry& v) { 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
  }
} 