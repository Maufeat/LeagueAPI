#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerSummonerIdAndIcon { 
    uint64_t summonerId;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolSummonerSummonerIdAndIcon& v) {
    j["summonerId"] = v.summonerId; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolSummonerSummonerIdAndIcon& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}