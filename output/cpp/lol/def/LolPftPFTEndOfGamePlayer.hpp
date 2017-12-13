#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPftPFTEndOfGamePlayer { 
    int32_t eloChange;
    int32_t elo;
    int32_t level;
    bool botPlayer;
    int32_t wins;
    std::vector<int32_t> items;
    int32_t spell1Id;
    int32_t leaves;
    int32_t profileIconId;
    bool isReportingDisabled;
    bool leaver;
    uint64_t userId;
    std::string summonerName;
    uint64_t gameId;
    int32_t spell2Id;
    std::string skinName;
    int32_t losses;
    int32_t teamId;
    json stats;
    int32_t championId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolPftPFTEndOfGamePlayer& v) {
  j["eloChange"] = v.eloChange; 
  j["elo"] = v.elo; 
  j["level"] = v.level; 
  j["botPlayer"] = v.botPlayer; 
  j["wins"] = v.wins; 
  j["items"] = v.items; 
  j["spell1Id"] = v.spell1Id; 
  j["leaves"] = v.leaves; 
  j["profileIconId"] = v.profileIconId; 
  j["isReportingDisabled"] = v.isReportingDisabled; 
  j["leaver"] = v.leaver; 
  j["userId"] = v.userId; 
  j["summonerName"] = v.summonerName; 
  j["gameId"] = v.gameId; 
  j["spell2Id"] = v.spell2Id; 
  j["skinName"] = v.skinName; 
  j["losses"] = v.losses; 
  j["teamId"] = v.teamId; 
  j["stats"] = v.stats; 
  j["championId"] = v.championId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolPftPFTEndOfGamePlayer& v) {
  v.eloChange = j.at("eloChange").get<int32_t>(); 
  v.elo = j.at("elo").get<int32_t>(); 
  v.level = j.at("level").get<int32_t>(); 
  v.botPlayer = j.at("botPlayer").get<bool>(); 
  v.wins = j.at("wins").get<int32_t>(); 
  v.items = j.at("items").get<std::vector<int32_t>>(); 
  v.spell1Id = j.at("spell1Id").get<int32_t>(); 
  v.leaves = j.at("leaves").get<int32_t>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
  v.leaver = j.at("leaver").get<bool>(); 
  v.userId = j.at("userId").get<uint64_t>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.spell2Id = j.at("spell2Id").get<int32_t>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  v.losses = j.at("losses").get<int32_t>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.stats = j.at("stats").get<json>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}