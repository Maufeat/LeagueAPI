#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectBannedChampions { 
    int32_t numBans;
    std::vector<int32_t> theirTeamBans;
    std::vector<int32_t> myTeamBans; 
  };
  inline void to_json(json& j, const LolPerksChampSelectBannedChampions& v) {
    j["numBans"] = v.numBans; 
    j["theirTeamBans"] = v.theirTeamBans; 
    j["myTeamBans"] = v.myTeamBans; 
  }
  inline void from_json(const json& j, LolPerksChampSelectBannedChampions& v) {
    v.numBans = j.at("numBans").get<int32_t>(); 
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>(); 
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>(); 
  }
}