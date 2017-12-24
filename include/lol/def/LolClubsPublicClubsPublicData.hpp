#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubTag.hpp"
namespace lol {
  struct LolClubsPublicClubsPublicData { 
    uint64_t summonerId;
    int32_t summonerIconId;
    std::string summonerName;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string availability;
    LolClubsPublicClubTag tag; 
  };
  inline void to_json(json& j, const LolClubsPublicClubsPublicData& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerIconId"] = v.summonerIconId; 
    j["summonerName"] = v.summonerName; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["availability"] = v.availability; 
    j["tag"] = v.tag; 
  }
  inline void from_json(const json& j, LolClubsPublicClubsPublicData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
  }
}