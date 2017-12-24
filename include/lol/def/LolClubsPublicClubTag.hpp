#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicClubTag { 
    uint64_t summonerId;
    std::string clubName;
    std::string clubTag; 
  };
  inline void to_json(json& j, const LolClubsPublicClubTag& v) {
    j["summonerId"] = v.summonerId; 
    j["clubName"] = v.clubName; 
    j["clubTag"] = v.clubTag; 
  }
  inline void from_json(const json& j, LolClubsPublicClubTag& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.clubTag = j.at("clubTag").get<std::string>(); 
  }
}