#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSummoner { 
    std::string displayName;
    uint32_t summonerLevel;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}