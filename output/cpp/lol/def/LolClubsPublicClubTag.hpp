#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubTag { 
    std::string clubName;
    std::string clubTag;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClubsPublicClubTag& v) {
    j["clubName"] = v.clubName; 
    j["clubTag"] = v.clubTag; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClubsPublicClubTag& v) {
    v.clubName = j.at("clubName").get<std::string>(); 
    v.clubTag = j.at("clubTag").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}