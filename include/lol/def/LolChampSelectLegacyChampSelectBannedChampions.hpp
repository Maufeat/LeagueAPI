#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectBannedChampions { 
    std::vector<int32_t> myTeamBans;
    std::vector<int32_t> theirTeamBans;
    int32_t numBans; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectBannedChampions& v) {
    j["myTeamBans"] = v.myTeamBans; 
    j["theirTeamBans"] = v.theirTeamBans; 
    j["numBans"] = v.numBans; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectBannedChampions& v) {
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>(); 
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>(); 
    v.numBans = j.at("numBans").get<int32_t>(); 
  }
}