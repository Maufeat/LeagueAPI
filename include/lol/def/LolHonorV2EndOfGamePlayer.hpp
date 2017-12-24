#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2EndOfGamePlayer { 
    uint64_t summonerId;
    bool botPlayer;
    int32_t skinIndex;
    uint64_t gameId;
    json stats;
    bool leaver;
    std::string summonerName;
    int32_t championId;
    uint64_t userId;
    int32_t wins;
    int32_t profileIconId;
    bool isReportingDisabled;
    std::string skinName;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGamePlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["botPlayer"] = v.botPlayer; 
    j["skinIndex"] = v.skinIndex; 
    j["gameId"] = v.gameId; 
    j["stats"] = v.stats; 
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["championId"] = v.championId; 
    j["userId"] = v.userId; 
    j["wins"] = v.wins; 
    j["profileIconId"] = v.profileIconId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["skinName"] = v.skinName; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGamePlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}