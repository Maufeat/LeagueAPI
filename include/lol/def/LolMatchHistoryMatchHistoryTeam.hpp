#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTeam { 
    bool firstBaron;
    bool firstTower;
    uint32_t towerKills;
    std::string win;
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans;
    bool firstBlood;
    bool firstInhibitor;
    uint32_t dominionVictoryScore;
    bool firstDargon;
    uint32_t inhibitorKills;
    uint32_t vilemawKills;
    uint32_t baronKills;
    uint16_t teamId;
    uint32_t dragonKills; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTeam& v) {
    j["firstBaron"] = v.firstBaron; 
    j["firstTower"] = v.firstTower; 
    j["towerKills"] = v.towerKills; 
    j["win"] = v.win; 
    j["bans"] = v.bans; 
    j["firstBlood"] = v.firstBlood; 
    j["firstInhibitor"] = v.firstInhibitor; 
    j["dominionVictoryScore"] = v.dominionVictoryScore; 
    j["firstDargon"] = v.firstDargon; 
    j["inhibitorKills"] = v.inhibitorKills; 
    j["vilemawKills"] = v.vilemawKills; 
    j["baronKills"] = v.baronKills; 
    j["teamId"] = v.teamId; 
    j["dragonKills"] = v.dragonKills; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTeam& v) {
    v.firstBaron = j.at("firstBaron").get<bool>(); 
    v.firstTower = j.at("firstTower").get<bool>(); 
    v.towerKills = j.at("towerKills").get<uint32_t>(); 
    v.win = j.at("win").get<std::string>(); 
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>(); 
    v.firstBlood = j.at("firstBlood").get<bool>(); 
    v.firstInhibitor = j.at("firstInhibitor").get<bool>(); 
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>(); 
    v.firstDargon = j.at("firstDargon").get<bool>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>(); 
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>(); 
    v.baronKills = j.at("baronKills").get<uint32_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.dragonKills = j.at("dragonKills").get<uint32_t>(); 
  }
}