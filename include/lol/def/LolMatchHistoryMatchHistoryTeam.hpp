#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTeam { 
    uint32_t vilemawKills;
    bool firstBaron;
    bool firstTower;
    uint32_t baronKills;
    uint32_t dominionVictoryScore;
    bool firstInhibitor;
    uint32_t dragonKills;
    bool firstDargon;
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans;
    std::string win;
    uint32_t towerKills;
    uint32_t inhibitorKills;
    bool firstBlood;
    uint16_t teamId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeam& v) {
    j["vilemawKills"] = v.vilemawKills; 
    j["firstBaron"] = v.firstBaron; 
    j["firstTower"] = v.firstTower; 
    j["baronKills"] = v.baronKills; 
    j["dominionVictoryScore"] = v.dominionVictoryScore; 
    j["firstInhibitor"] = v.firstInhibitor; 
    j["dragonKills"] = v.dragonKills; 
    j["firstDargon"] = v.firstDargon; 
    j["bans"] = v.bans; 
    j["win"] = v.win; 
    j["towerKills"] = v.towerKills; 
    j["inhibitorKills"] = v.inhibitorKills; 
    j["firstBlood"] = v.firstBlood; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeam& v) {
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>(); 
    v.firstBaron = j.at("firstBaron").get<bool>(); 
    v.firstTower = j.at("firstTower").get<bool>(); 
    v.baronKills = j.at("baronKills").get<uint32_t>(); 
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>(); 
    v.firstInhibitor = j.at("firstInhibitor").get<bool>(); 
    v.dragonKills = j.at("dragonKills").get<uint32_t>(); 
    v.firstDargon = j.at("firstDargon").get<bool>(); 
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>(); 
    v.win = j.at("win").get<std::string>(); 
    v.towerKills = j.at("towerKills").get<uint32_t>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>(); 
    v.firstBlood = j.at("firstBlood").get<bool>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
  }
}