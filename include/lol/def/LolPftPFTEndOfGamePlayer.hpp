#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTEndOfGamePlayer { 
    json stats;
    std::vector<int32_t> items;
    bool botPlayer;
    int32_t championId;
    int32_t elo;
    int32_t eloChange;
    bool isReportingDisabled;
    uint64_t gameId;
    bool leaver;
    int32_t leaves;
    int32_t level;
    int32_t losses;
    int32_t profileIconId;
    std::string skinName;
    int32_t spell1Id;
    int32_t spell2Id;
    std::string summonerName;
    int32_t teamId;
    uint64_t userId;
    int32_t wins;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolPftPFTEndOfGamePlayer& v) {
    j["stats"] = v.stats; 
    j["items"] = v.items; 
    j["botPlayer"] = v.botPlayer; 
    j["championId"] = v.championId; 
    j["elo"] = v.elo; 
    j["eloChange"] = v.eloChange; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["gameId"] = v.gameId; 
    j["leaver"] = v.leaver; 
    j["leaves"] = v.leaves; 
    j["level"] = v.level; 
    j["losses"] = v.losses; 
    j["profileIconId"] = v.profileIconId; 
    j["skinName"] = v.skinName; 
    j["spell1Id"] = v.spell1Id; 
    j["spell2Id"] = v.spell2Id; 
    j["summonerName"] = v.summonerName; 
    j["teamId"] = v.teamId; 
    j["userId"] = v.userId; 
    j["wins"] = v.wins; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolPftPFTEndOfGamePlayer& v) {
    v.stats = j.at("stats").get<json>(); 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}