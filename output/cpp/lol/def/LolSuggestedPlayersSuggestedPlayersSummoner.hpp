#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSummoner { 
    uint32_t summonerLevel;
    std::string displayName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["displayName"] = v.displayName; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}