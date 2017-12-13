#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsInviter { 
    std::string previousSeasonHighestTier;
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsInviter& v) {
  j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsInviter& v) {
  v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}