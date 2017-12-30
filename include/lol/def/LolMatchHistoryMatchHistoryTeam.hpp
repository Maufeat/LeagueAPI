#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTeam { 
    bool firstTower;
    uint32_t dragonKills;
    bool firstBlood;
    uint32_t baronKills;
    uint32_t towerKills;
    uint32_t dominionVictoryScore;
    uint16_t teamId;
    bool firstDargon;
    uint32_t inhibitorKills;
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans;
    bool firstBaron;
    std::string win;
    bool firstInhibitor;
    uint32_t vilemawKills; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeam& v) {
    j["firstTower"] = v.firstTower; 
    j["dragonKills"] = v.dragonKills; 
    j["firstBlood"] = v.firstBlood; 
    j["baronKills"] = v.baronKills; 
    j["towerKills"] = v.towerKills; 
    j["dominionVictoryScore"] = v.dominionVictoryScore; 
    j["teamId"] = v.teamId; 
    j["firstDargon"] = v.firstDargon; 
    j["inhibitorKills"] = v.inhibitorKills; 
    j["bans"] = v.bans; 
    j["firstBaron"] = v.firstBaron; 
    j["win"] = v.win; 
    j["firstInhibitor"] = v.firstInhibitor; 
    j["vilemawKills"] = v.vilemawKills; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeam& v) {
    v.firstTower = j.at("firstTower").get<bool>(); 
    v.dragonKills = j.at("dragonKills").get<uint32_t>(); 
    v.firstBlood = j.at("firstBlood").get<bool>(); 
    v.baronKills = j.at("baronKills").get<uint32_t>(); 
    v.towerKills = j.at("towerKills").get<uint32_t>(); 
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.firstDargon = j.at("firstDargon").get<bool>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>(); 
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>(); 
    v.firstBaron = j.at("firstBaron").get<bool>(); 
    v.win = j.at("win").get<std::string>(); 
    v.firstInhibitor = j.at("firstInhibitor").get<bool>(); 
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>(); 
  }
}