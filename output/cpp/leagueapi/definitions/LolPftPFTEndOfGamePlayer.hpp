#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer { /**/ 
    bool isReportingDisabled;/**/
    std::vector<int32_t> items;/**/
    bool leaver;/**/
    std::string summonerName;/**/
    int32_t teamId;/**/
    int32_t eloChange;/**/
    int32_t leaves;/**/
    int32_t spell2Id;/**/
    int32_t spell1Id;/**/
    uint64_t userId;/**/
    int32_t championId;/**/
    int32_t level;/**/
    int32_t wins;/**/
    bool botPlayer;/**/
    int32_t profileIconId;/**/
    int32_t elo;/**/
    int32_t losses;/**/
    std::string skinName;/**/
    uint64_t gameId;/**/
    uint64_t summonerId;/**/
    json stats;/**/
  };
  static void to_json(json& j, const LolPftPFTEndOfGamePlayer& v) { 
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["items"] = v.items;
    j["leaver"] = v.leaver;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
    j["eloChange"] = v.eloChange;
    j["leaves"] = v.leaves;
    j["spell2Id"] = v.spell2Id;
    j["spell1Id"] = v.spell1Id;
    j["userId"] = v.userId;
    j["championId"] = v.championId;
    j["level"] = v.level;
    j["wins"] = v.wins;
    j["botPlayer"] = v.botPlayer;
    j["profileIconId"] = v.profileIconId;
    j["elo"] = v.elo;
    j["losses"] = v.losses;
    j["skinName"] = v.skinName;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["stats"] = v.stats;
  }
  static void from_json(const json& j, LolPftPFTEndOfGamePlayer& v) { 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.stats = j.at("stats").get<json>(); 
  }
} 