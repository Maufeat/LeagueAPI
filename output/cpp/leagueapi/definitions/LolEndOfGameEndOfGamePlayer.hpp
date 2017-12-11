#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer { /**/ 
    std::vector<int32_t> items;/**/
    int32_t eloChange;/**/
    int32_t leaves;/**/
    int32_t losses;/**/
    std::string skinName;/**/
    uint64_t userId;/**/
    int32_t level;/**/
    uint64_t summonerId;/**/
    int32_t elo;/**/
    int32_t spell2Id;/**/
    std::string summonerName;/**/
    int32_t skinIndex;/**/
    bool isReportingDisabled;/**/
    int32_t profileIconId;/**/
    bool leaver;/**/
    int32_t teamId;/**/
    int32_t spell1Id;/**/
    int32_t championId;/**/
    json stats;/**/
    bool botPlayer;/**/
    uint64_t gameId;/**/
    int32_t wins;/**/
  };
  static void to_json(json& j, const LolEndOfGameEndOfGamePlayer& v) { 
    j["items"] = v.items;
    j["eloChange"] = v.eloChange;
    j["leaves"] = v.leaves;
    j["losses"] = v.losses;
    j["skinName"] = v.skinName;
    j["userId"] = v.userId;
    j["level"] = v.level;
    j["summonerId"] = v.summonerId;
    j["elo"] = v.elo;
    j["spell2Id"] = v.spell2Id;
    j["summonerName"] = v.summonerName;
    j["skinIndex"] = v.skinIndex;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["profileIconId"] = v.profileIconId;
    j["leaver"] = v.leaver;
    j["teamId"] = v.teamId;
    j["spell1Id"] = v.spell1Id;
    j["championId"] = v.championId;
    j["stats"] = v.stats;
    j["botPlayer"] = v.botPlayer;
    j["gameId"] = v.gameId;
    j["wins"] = v.wins;
  }
  static void from_json(const json& j, LolEndOfGameEndOfGamePlayer& v) { 
    v.items = j.at("items").get<std::vector<int32_t>>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.stats = j.at("stats").get<json>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
  }
} 