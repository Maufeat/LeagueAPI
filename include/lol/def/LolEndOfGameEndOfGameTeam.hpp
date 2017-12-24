#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace lol {
  struct LolEndOfGameEndOfGameTeam { 
    bool isPlayerTeam;
    std::string memberStatusString;
    std::vector<LolEndOfGameEndOfGamePlayer> players;
    std::string fullId;
    std::string name;
    bool isWinningTeam;
    int32_t teamId;
    std::vector<int32_t> championBans;
    json stats;
    bool isBottomTeam;
    std::string tag; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGameTeam& v) {
    j["isPlayerTeam"] = v.isPlayerTeam; 
    j["memberStatusString"] = v.memberStatusString; 
    j["players"] = v.players; 
    j["fullId"] = v.fullId; 
    j["name"] = v.name; 
    j["isWinningTeam"] = v.isWinningTeam; 
    j["teamId"] = v.teamId; 
    j["championBans"] = v.championBans; 
    j["stats"] = v.stats; 
    j["isBottomTeam"] = v.isBottomTeam; 
    j["tag"] = v.tag; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGameTeam& v) {
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>(); 
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer>>(); 
    v.fullId = j.at("fullId").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isWinningTeam = j.at("isWinningTeam").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.championBans = j.at("championBans").get<std::vector<int32_t>>(); 
    v.stats = j.at("stats").get<json>(); 
    v.isBottomTeam = j.at("isBottomTeam").get<bool>(); 
    v.tag = j.at("tag").get<std::string>(); 
  }
}