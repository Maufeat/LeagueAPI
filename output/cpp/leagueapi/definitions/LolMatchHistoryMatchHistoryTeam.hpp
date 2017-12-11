#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryTeamBan.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam { /**/ 
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans;/**/
    uint32_t baronKills;/**/
    uint16_t teamId;/**/
    bool firstDargon;/**/
    uint32_t vilemawKills;/**/
    uint32_t dominionVictoryScore;/**/
    bool firstInhibitor;/**/
    uint32_t towerKills;/**/
    uint32_t dragonKills;/**/
    std::string win;/**/
    bool firstTower;/**/
    bool firstBlood;/**/
    bool firstBaron;/**/
    uint32_t inhibitorKills;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryTeam& v) { 
    j["bans"] = v.bans;
    j["baronKills"] = v.baronKills;
    j["teamId"] = v.teamId;
    j["firstDargon"] = v.firstDargon;
    j["vilemawKills"] = v.vilemawKills;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["firstInhibitor"] = v.firstInhibitor;
    j["towerKills"] = v.towerKills;
    j["dragonKills"] = v.dragonKills;
    j["win"] = v.win;
    j["firstTower"] = v.firstTower;
    j["firstBlood"] = v.firstBlood;
    j["firstBaron"] = v.firstBaron;
    j["inhibitorKills"] = v.inhibitorKills;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryTeam& v) { 
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>(); 
    v.baronKills = j.at("baronKills").get<uint32_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.firstDargon = j.at("firstDargon").get<bool>(); 
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>(); 
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>(); 
    v.firstInhibitor = j.at("firstInhibitor").get<bool>(); 
    v.towerKills = j.at("towerKills").get<uint32_t>(); 
    v.dragonKills = j.at("dragonKills").get<uint32_t>(); 
    v.win = j.at("win").get<std::string>(); 
    v.firstTower = j.at("firstTower").get<bool>(); 
    v.firstBlood = j.at("firstBlood").get<bool>(); 
    v.firstBaron = j.at("firstBaron").get<bool>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>(); 
  }
} 