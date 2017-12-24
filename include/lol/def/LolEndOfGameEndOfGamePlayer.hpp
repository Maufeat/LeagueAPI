#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameEndOfGamePlayer { 
    std::vector<int32_t> items;
    bool botPlayer;
    int32_t skinIndex;
    std::string skinName;
    int32_t spell2Id;
    bool leaver;
    std::string summonerName;
    int32_t level;
    uint64_t userId;
    int32_t leaves;
    uint64_t gameId;
    int32_t eloChange;
    json stats;
    int32_t elo;
    int32_t wins;
    uint64_t summonerId;
    int32_t spell1Id;
    int32_t championId;
    int32_t losses;
    int32_t profileIconId;
    bool isReportingDisabled;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGamePlayer& v) {
    j["items"] = v.items; 
    j["botPlayer"] = v.botPlayer; 
    j["skinIndex"] = v.skinIndex; 
    j["skinName"] = v.skinName; 
    j["spell2Id"] = v.spell2Id; 
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["level"] = v.level; 
    j["userId"] = v.userId; 
    j["leaves"] = v.leaves; 
    j["gameId"] = v.gameId; 
    j["eloChange"] = v.eloChange; 
    j["stats"] = v.stats; 
    j["elo"] = v.elo; 
    j["wins"] = v.wins; 
    j["summonerId"] = v.summonerId; 
    j["spell1Id"] = v.spell1Id; 
    j["championId"] = v.championId; 
    j["losses"] = v.losses; 
    j["profileIconId"] = v.profileIconId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGamePlayer& v) {
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}