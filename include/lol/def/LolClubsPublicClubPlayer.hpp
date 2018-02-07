#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicClubPlayer { 
    uint64_t summonerId;
    std::string summonerName; 
  };
  inline void to_json(json& j, const LolClubsPublicClubPlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
  }
  inline void from_json(const json& j, LolClubsPublicClubPlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
  }
}