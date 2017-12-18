#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubTag.hpp"
namespace lol {
  struct LolClubsPublicClubsPublicData { 
    LolClubsPublicClubTag tag;
    std::string summonerName;
    std::optional<std::string> lastSeenOnlineTimestamp;
    int32_t summonerIconId;
    std::string availability;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolClubsPublicClubsPublicData& v) {
    j["tag"] = v.tag; 
    j["summonerName"] = v.summonerName; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerIconId"] = v.summonerIconId; 
    j["availability"] = v.availability; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolClubsPublicClubsPublicData& v) {
    v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}