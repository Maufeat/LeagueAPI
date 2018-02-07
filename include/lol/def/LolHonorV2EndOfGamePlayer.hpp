#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EndOfGamePlayer { 
    json stats;
    bool botPlayer;
    int32_t championId;
    bool isReportingDisabled;
    uint64_t gameId;
    bool leaver;
    int32_t profileIconId;
    std::string skinName;
    std::string summonerName;
    int32_t teamId;
    uint64_t userId;
    int32_t wins;
    uint64_t summonerId;
    int32_t skinIndex; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGamePlayer& v) {
    j["stats"] = v.stats; 
    j["botPlayer"] = v.botPlayer; 
    j["championId"] = v.championId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["gameId"] = v.gameId; 
    j["leaver"] = v.leaver; 
    j["profileIconId"] = v.profileIconId; 
    j["skinName"] = v.skinName; 
    j["summonerName"] = v.summonerName; 
    j["teamId"] = v.teamId; 
    j["userId"] = v.userId; 
    j["wins"] = v.wins; 
    j["summonerId"] = v.summonerId; 
    j["skinIndex"] = v.skinIndex; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGamePlayer& v) {
    v.stats = j.at("stats").get<json>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  }
}