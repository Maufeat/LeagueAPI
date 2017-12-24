#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EligiblePlayer { 
    uint64_t summonerId;
    std::string summonerName;
    int32_t championId;
    int32_t skinIndex;
    std::string skinName; 
  };
  inline void to_json(json& j, const LolHonorV2EligiblePlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["championId"] = v.championId; 
    j["skinIndex"] = v.skinIndex; 
    j["skinName"] = v.skinName; 
  }
  inline void from_json(const json& j, LolHonorV2EligiblePlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
  }
}