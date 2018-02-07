#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubTag.hpp"
namespace lol {
  struct LolClubsPublicClubsPublicData { 
    uint64_t summonerId;
    std::string summonerName;
    int32_t summonerIconId;
    LolClubsPublicClubTag tag;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string availability; 
  };
  inline void to_json(json& j, const LolClubsPublicClubsPublicData& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["summonerIconId"] = v.summonerIconId; 
    j["tag"] = v.tag; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["availability"] = v.availability; 
  }
  inline void from_json(const json& j, LolClubsPublicClubsPublicData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.availability = j.at("availability").get<std::string>(); 
  }
}