#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EligiblePlayer { 
    uint64_t summonerId;
    int32_t championId;
    std::string summonerName;
    std::string skinName;
    int32_t skinIndex; 
  };
  inline void to_json(json& j, const LolHonorV2EligiblePlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
    j["summonerName"] = v.summonerName; 
    j["skinName"] = v.skinName; 
    j["skinIndex"] = v.skinIndex; 
  }
  inline void from_json(const json& j, LolHonorV2EligiblePlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  }
}