#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRankedScoutingTopChampion.hpp>
namespace lol {
  struct LolClashRankedScoutingMember { 
    uint64_t playerId;
    std::vector<LolClashRankedScoutingTopChampion> championScoutingData; 
  };
  void to_json(json& j, const LolClashRankedScoutingMember& v) {
  j["playerId"] = v.playerId; 
  j["championScoutingData"] = v.championScoutingData; 
  }
  void from_json(const json& j, LolClashRankedScoutingMember& v) {
  v.playerId = j.at("playerId").get<uint64_t>(); 
  v.championScoutingData = j.at("championScoutingData").get<std::vector<LolClashRankedScoutingTopChampion>>(); 
  }
}