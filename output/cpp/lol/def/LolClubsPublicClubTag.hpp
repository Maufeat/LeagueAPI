#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubTag { 
    uint64_t summonerId;
    std::string clubTag;
    std::string clubName; 
  };
  void to_json(json& j, const LolClubsPublicClubTag& v) {
  j["summonerId"] = v.summonerId; 
  j["clubTag"] = v.clubTag; 
  j["clubName"] = v.clubName; 
  }
  void from_json(const json& j, LolClubsPublicClubTag& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.clubTag = j.at("clubTag").get<std::string>(); 
  v.clubName = j.at("clubName").get<std::string>(); 
  }
}