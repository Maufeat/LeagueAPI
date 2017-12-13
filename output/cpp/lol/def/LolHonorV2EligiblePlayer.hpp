#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2EligiblePlayer { 
    int32_t skinIndex;
    std::string skinName;
    std::string summonerName;
    int32_t championId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolHonorV2EligiblePlayer& v) {
    j["skinIndex"] = v.skinIndex; 
    j["skinName"] = v.skinName; 
    j["summonerName"] = v.summonerName; 
    j["championId"] = v.championId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolHonorV2EligiblePlayer& v) {
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}