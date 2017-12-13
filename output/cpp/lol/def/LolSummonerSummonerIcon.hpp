#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerIcon { 
    int32_t profileIconId; 
  };
  void to_json(json& j, const LolSummonerSummonerIcon& v) {
  j["profileIconId"] = v.profileIconId; 
  }
  void from_json(const json& j, LolSummonerSummonerIcon& v) {
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}