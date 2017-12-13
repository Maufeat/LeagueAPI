#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2EligiblePlayer { 
    std::string summonerName;
    int32_t skinIndex;
    uint64_t summonerId;
    int32_t championId;
    std::string skinName; 
  };
  void to_json(json& j, const LolHonorV2EligiblePlayer& v) {
  j["summonerName"] = v.summonerName; 
  j["skinIndex"] = v.skinIndex; 
  j["summonerId"] = v.summonerId; 
  j["championId"] = v.championId; 
  j["skinName"] = v.skinName; 
  }
  void from_json(const json& j, LolHonorV2EligiblePlayer& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  }
}