#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSummoner { 
    uint64_t summonerId;
    std::string displayName;
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["displayName"] = v.displayName; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}