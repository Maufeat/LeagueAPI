#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct FellowPlayerInfo { 
    uint64_t championId;
    uint64_t summonerId;
    uint64_t teamId; 
  };
  inline void to_json(json& j, const FellowPlayerInfo& v) {
    j["championId"] = v.championId; 
    j["summonerId"] = v.summonerId; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, FellowPlayerInfo& v) {
    v.championId = j.at("championId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.teamId = j.at("teamId").get<uint64_t>(); 
  }
}