#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksChampSelectBannedChampions { 
    std::vector<int32_t> theirTeamBans;
    std::vector<int32_t> myTeamBans;
    int32_t numBans; 
  };
  void to_json(json& j, const LolPerksChampSelectBannedChampions& v) {
    j["theirTeamBans"] = v.theirTeamBans; 
    j["myTeamBans"] = v.myTeamBans; 
    j["numBans"] = v.numBans; 
  }
  void from_json(const json& j, LolPerksChampSelectBannedChampions& v) {
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>(); 
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>(); 
    v.numBans = j.at("numBans").get<int32_t>(); 
  }
}