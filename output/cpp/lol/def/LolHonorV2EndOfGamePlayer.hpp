#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2EndOfGamePlayer { 
    bool isReportingDisabled;
    int32_t profileIconId;
    bool leaver;
    int32_t teamId;
    int32_t wins;
    uint64_t userId;
    int32_t championId;
    int32_t skinIndex;
    bool botPlayer;
    uint64_t summonerId;
    std::string skinName;
    std::string summonerName;
    uint64_t gameId;
    json stats; 
  };
  void to_json(json& j, const LolHonorV2EndOfGamePlayer& v) {
  j["isReportingDisabled"] = v.isReportingDisabled; 
  j["profileIconId"] = v.profileIconId; 
  j["leaver"] = v.leaver; 
  j["teamId"] = v.teamId; 
  j["wins"] = v.wins; 
  j["userId"] = v.userId; 
  j["championId"] = v.championId; 
  j["skinIndex"] = v.skinIndex; 
  j["botPlayer"] = v.botPlayer; 
  j["summonerId"] = v.summonerId; 
  j["skinName"] = v.skinName; 
  j["summonerName"] = v.summonerName; 
  j["gameId"] = v.gameId; 
  j["stats"] = v.stats; 
  }
  void from_json(const json& j, LolHonorV2EndOfGamePlayer& v) {
  v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.leaver = j.at("leaver").get<bool>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.wins = j.at("wins").get<int32_t>(); 
  v.userId = j.at("userId").get<uint64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  v.botPlayer = j.at("botPlayer").get<bool>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.stats = j.at("stats").get<json>(); 
  }
}