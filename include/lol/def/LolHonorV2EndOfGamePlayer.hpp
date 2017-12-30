#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EndOfGamePlayer { 
    bool leaver;
    std::string summonerName;
    uint64_t summonerId;
    bool isReportingDisabled;
    int32_t wins;
    json stats;
    int32_t championId;
    std::string skinName;
    int32_t skinIndex;
    uint64_t gameId;
    uint64_t userId;
    int32_t profileIconId;
    bool botPlayer;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGamePlayer& v) {
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["wins"] = v.wins; 
    j["stats"] = v.stats; 
    j["championId"] = v.championId; 
    j["skinName"] = v.skinName; 
    j["skinIndex"] = v.skinIndex; 
    j["gameId"] = v.gameId; 
    j["userId"] = v.userId; 
    j["profileIconId"] = v.profileIconId; 
    j["botPlayer"] = v.botPlayer; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGamePlayer& v) {
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}