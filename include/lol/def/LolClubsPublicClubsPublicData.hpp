#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubTag.hpp"
namespace lol {
  struct LolClubsPublicClubsPublicData { 
    std::string summonerName;
    std::string availability;
    LolClubsPublicClubTag tag;
    std::optional<std::string> lastSeenOnlineTimestamp;
    uint64_t summonerId;
    int32_t summonerIconId; 
  };
  inline void to_json(json& j, const LolClubsPublicClubsPublicData& v) {
    j["summonerName"] = v.summonerName; 
    j["availability"] = v.availability; 
    j["tag"] = v.tag; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerId"] = v.summonerId; 
    j["summonerIconId"] = v.summonerIconId; 
  }
  inline void from_json(const json& j, LolClubsPublicClubsPublicData& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
}