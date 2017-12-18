#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerSummonerIcon { 
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolSummonerSummonerIcon& v) {
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolSummonerSummonerIcon& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}