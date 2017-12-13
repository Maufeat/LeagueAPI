#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2EndOfGamePlayer { 
    bool leaver;
    bool botPlayer;
    int32_t wins;
    bool isReportingDisabled;
    int32_t profileIconId;
    uint64_t userId;
    std::string skinName;
    std::string summonerName;
    uint64_t gameId;
    int32_t skinIndex;
    int32_t championId;
    json stats;
    int32_t teamId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolHonorV2EndOfGamePlayer& v) {
    j["leaver"] = v.leaver; 
    j["botPlayer"] = v.botPlayer; 
    j["wins"] = v.wins; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["profileIconId"] = v.profileIconId; 
    j["userId"] = v.userId; 
    j["skinName"] = v.skinName; 
    j["summonerName"] = v.summonerName; 
    j["gameId"] = v.gameId; 
    j["skinIndex"] = v.skinIndex; 
    j["championId"] = v.championId; 
    j["stats"] = v.stats; 
    j["teamId"] = v.teamId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolHonorV2EndOfGamePlayer& v) {
    v.leaver = j.at("leaver").get<bool>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}