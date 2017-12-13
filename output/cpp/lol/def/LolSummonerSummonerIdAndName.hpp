#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerIdAndName { 
    std::string displayName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolSummonerSummonerIdAndName& v) {
    j["displayName"] = v.displayName; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolSummonerSummonerIdAndName& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}