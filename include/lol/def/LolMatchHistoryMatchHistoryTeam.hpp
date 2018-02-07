#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTeam { 
    uint16_t teamId;
    std::string win;
    bool firstBlood;
    bool firstTower;
    bool firstInhibitor;
    bool firstBaron;
    bool firstDargon;
    uint32_t towerKills;
    uint32_t inhibitorKills;
    uint32_t baronKills;
    uint32_t dragonKills;
    uint32_t vilemawKills;
    uint32_t dominionVictoryScore;
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeam& v) {
    j["teamId"] = v.teamId; 
    j["win"] = v.win; 
    j["firstBlood"] = v.firstBlood; 
    j["firstTower"] = v.firstTower; 
    j["firstInhibitor"] = v.firstInhibitor; 
    j["firstBaron"] = v.firstBaron; 
    j["firstDargon"] = v.firstDargon; 
    j["towerKills"] = v.towerKills; 
    j["inhibitorKills"] = v.inhibitorKills; 
    j["baronKills"] = v.baronKills; 
    j["dragonKills"] = v.dragonKills; 
    j["vilemawKills"] = v.vilemawKills; 
    j["dominionVictoryScore"] = v.dominionVictoryScore; 
    j["bans"] = v.bans; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeam& v) {
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.win = j.at("win").get<std::string>(); 
    v.firstBlood = j.at("firstBlood").get<bool>(); 
    v.firstTower = j.at("firstTower").get<bool>(); 
    v.firstInhibitor = j.at("firstInhibitor").get<bool>(); 
    v.firstBaron = j.at("firstBaron").get<bool>(); 
    v.firstDargon = j.at("firstDargon").get<bool>(); 
    v.towerKills = j.at("towerKills").get<uint32_t>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>(); 
    v.baronKills = j.at("baronKills").get<uint32_t>(); 
    v.dragonKills = j.at("dragonKills").get<uint32_t>(); 
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>(); 
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>(); 
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>(); 
  }
}