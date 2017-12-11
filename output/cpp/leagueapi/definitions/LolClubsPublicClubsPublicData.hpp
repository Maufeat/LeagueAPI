#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClubsPublicClubTag.hpp>

namespace leagueapi {
  struct LolClubsPublicClubsPublicData { /**/ 
    LolClubsPublicClubTag tag;/**/
    uint64_t summonerId;/**/
    int32_t summonerIconId;/**/
    std::string summonerName;/**/
    std::string availability;/**/
    std::optional<std::string> lastSeenOnlineTimestamp;/**/
  };
  static void to_json(json& j, const LolClubsPublicClubsPublicData& v) { 
    j["tag"] = v.tag;
    j["summonerId"] = v.summonerId;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
    j["availability"] = v.availability;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
  }
  static void from_json(const json& j, LolClubsPublicClubsPublicData& v) { 
    v.tag = j.at("tag").get<LolClubsPublicClubTag>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::optional<std::string>>(); 
  }
} 