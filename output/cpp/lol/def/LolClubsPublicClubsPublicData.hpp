#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClubsPublicClubTag.hpp>
namespace lol {
  struct LolClubsPublicClubsPublicData { 
    LolClubsPublicClubTag tag;
    std::string summonerName;
    std::optional<std::string> lastSeenOnlineTimestamp;
    int32_t summonerIconId;
    std::string availability;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClubsPublicClubsPublicData& v) {
  j["tag"] = v.tag; 
  j["summonerName"] = v.summonerName; 
  j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp; 
  j["summonerIconId"] = v.summonerIconId; 
  j["availability"] = v.availability; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClubsPublicClubsPublicData& v) {
  v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::optional<std::string>>(); 
  v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  v.availability = j.at("availability").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}