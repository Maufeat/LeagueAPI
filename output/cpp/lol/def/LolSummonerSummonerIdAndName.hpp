#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerIdAndName { 
    uint64_t summonerId;
    std::string displayName; 
  };
  void to_json(json& j, const LolSummonerSummonerIdAndName& v) {
  j["summonerId"] = v.summonerId; 
  j["displayName"] = v.displayName; 
  }
  void from_json(const json& j, LolSummonerSummonerIdAndName& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  }
}