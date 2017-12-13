#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSummoner { 
    uint64_t summonerId;
    uint32_t summonerLevel;
    std::string displayName; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSummoner& v) {
  j["summonerId"] = v.summonerId; 
  j["summonerLevel"] = v.summonerLevel; 
  j["displayName"] = v.displayName; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSummoner& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  }
}