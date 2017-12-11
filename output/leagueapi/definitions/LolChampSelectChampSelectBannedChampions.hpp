#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectChampSelectBannedChampions { /**/ 
    std::vector<int32_t> theirTeamBans;/**/
    int32_t numBans;/**/
    std::vector<int32_t> myTeamBans;/**/
  };
  static void to_json(json& j, const LolChampSelectChampSelectBannedChampions& v) { 
    j["theirTeamBans"] = v.theirTeamBans;
    j["numBans"] = v.numBans;
    j["myTeamBans"] = v.myTeamBans;
  }
  static void from_json(const json& j, LolChampSelectChampSelectBannedChampions& v) { 
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>(); 
    v.numBans = j.at("numBans").get<int32_t>(); 
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>(); 
  }
} 