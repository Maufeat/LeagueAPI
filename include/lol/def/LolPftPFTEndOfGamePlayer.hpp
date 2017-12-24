#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTEndOfGamePlayer { 
    int32_t leaves;
    std::vector<int32_t> items;
    bool botPlayer;
    int32_t eloChange;
    uint64_t summonerId;
    int32_t spell2Id;
    int32_t teamId;
    uint64_t gameId;
    int32_t elo;
    bool isReportingDisabled;
    bool leaver;
    uint64_t userId;
    int32_t spell1Id;
    int32_t championId;
    std::string summonerName;
    int32_t wins;
    int32_t losses;
    int32_t profileIconId;
    json stats;
    std::string skinName;
    int32_t level; 
  };
  inline void to_json(json& j, const LolPftPFTEndOfGamePlayer& v) {
    j["leaves"] = v.leaves; 
    j["items"] = v.items; 
    j["botPlayer"] = v.botPlayer; 
    j["eloChange"] = v.eloChange; 
    j["summonerId"] = v.summonerId; 
    j["spell2Id"] = v.spell2Id; 
    j["teamId"] = v.teamId; 
    j["gameId"] = v.gameId; 
    j["elo"] = v.elo; 
    j["isReportingDisabled"] = v.isReportingDisabled; 
    j["leaver"] = v.leaver; 
    j["userId"] = v.userId; 
    j["spell1Id"] = v.spell1Id; 
    j["championId"] = v.championId; 
    j["summonerName"] = v.summonerName; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["profileIconId"] = v.profileIconId; 
    j["stats"] = v.stats; 
    j["skinName"] = v.skinName; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolPftPFTEndOfGamePlayer& v) {
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.level = j.at("level").get<int32_t>(); 
  }
}