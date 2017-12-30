#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTEndOfGamePlayer { 
    bool leaver;
    std::string summonerName;
    uint64_t summonerId;
    int32_t teamId;
    int32_t spell2Id;
    uint64_t userId;
    bool isReportingDisabled;
    int32_t wins;
    json stats;
    int32_t losses;
    int32_t level;
    std::string skinName;
    int32_t leaves;
    std::vector<int32_t> items;
    uint64_t gameId;
    bool botPlayer;
    int32_t elo;
    int32_t profileIconId;
    int32_t championId;
    int32_t spell1Id;
    int32_t eloChange; 
  };
  inline void to_json(json& j, const LolPftPFTEndOfGamePlayer& v) {
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["teamId"] = v.teamId; 
    j["spell2Id"] = v.spell2Id; 
    j["userId"] = v.userId; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["wins"] = v.wins; 
    j["stats"] = v.stats; 
    j["losses"] = v.losses; 
    j["level"] = v.level; 
    j["skinName"] = v.skinName; 
    j["leaves"] = v.leaves; 
    j["items"] = v.items; 
    j["gameId"] = v.gameId; 
    j["botPlayer"] = v.botPlayer; 
    j["elo"] = v.elo; 
    j["profileIconId"] = v.profileIconId; 
    j["championId"] = v.championId; 
    j["spell1Id"] = v.spell1Id; 
    j["eloChange"] = v.eloChange; 
  }
  inline void from_json(const json& j, LolPftPFTEndOfGamePlayer& v) {
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
  }
}