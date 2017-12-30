#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EligiblePlayer { 
    std::string skinName;
    std::string summonerName;
    uint64_t summonerId;
    int32_t championId;
    int32_t skinIndex; 
  };
  inline void to_json(json& j, const LolHonorV2EligiblePlayer& v) {
    j["skinName"] = v.skinName; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
    j["skinIndex"] = v.skinIndex; 
  }
  inline void from_json(const json& j, LolHonorV2EligiblePlayer& v) {
    v.skinName = j.at("skinName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  }
}