#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameEndOfGamePlayer { 
    int32_t elo;
    bool botPlayer;
    int32_t wins;
    std::vector<int32_t> items;
    int32_t leaves;
    int32_t spell1Id;
    bool leaver;
    std::string summonerName;
    int32_t spell2Id;
    int32_t losses;
    std::string skinName;
    int32_t profileIconId;
    int32_t championId;
    int32_t eloChange;
    int32_t skinIndex;
    uint64_t userId;
    bool isReportingDisabled;
    int32_t level;
    uint64_t gameId;
    json stats;
    int32_t teamId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGamePlayer& v) {
    j["elo"] = v.elo; 
    j["botPlayer"] = v.botPlayer; 
    j["wins"] = v.wins; 
    j["items"] = v.items; 
    j["leaves"] = v.leaves; 
    j["spell1Id"] = v.spell1Id; 
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["spell2Id"] = v.spell2Id; 
    j["losses"] = v.losses; 
    j["skinName"] = v.skinName; 
    j["profileIconId"] = v.profileIconId; 
    j["championId"] = v.championId; 
    j["eloChange"] = v.eloChange; 
    j["skinIndex"] = v.skinIndex; 
    j["userId"] = v.userId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["level"] = v.level; 
    j["gameId"] = v.gameId; 
    j["stats"] = v.stats; 
    j["teamId"] = v.teamId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGamePlayer& v) {
    v.elo = j.at("elo").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}