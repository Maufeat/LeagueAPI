#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerIdAndIcon { 
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolSummonerSummonerIdAndIcon& v) {
    j["profileIconId"] = v.profileIconId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolSummonerSummonerIdAndIcon& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}