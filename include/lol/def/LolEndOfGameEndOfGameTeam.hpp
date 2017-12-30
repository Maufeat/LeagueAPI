#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace lol {
  struct LolEndOfGameEndOfGameTeam { 
    std::string name;
    std::string fullId;
    bool isWinningTeam;
    std::vector<int32_t> championBans;
    std::string tag;
    bool isBottomTeam;
    std::string memberStatusString;
    json stats;
    std::vector<LolEndOfGameEndOfGamePlayer> players;
    bool isPlayerTeam;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGameTeam& v) {
    j["name"] = v.name; 
    j["fullId"] = v.fullId; 
    j["isWinningTeam"] = v.isWinningTeam; 
    j["championBans"] = v.championBans; 
    j["tag"] = v.tag; 
    j["isBottomTeam"] = v.isBottomTeam; 
    j["memberStatusString"] = v.memberStatusString; 
    j["stats"] = v.stats; 
    j["players"] = v.players; 
    j["isPlayerTeam"] = v.isPlayerTeam; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGameTeam& v) {
    v.name = j.at("name").get<std::string>(); 
    v.fullId = j.at("fullId").get<std::string>(); 
    v.isWinningTeam = j.at("isWinningTeam").get<bool>(); 
    v.championBans = j.at("championBans").get<std::vector<int32_t>>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.isBottomTeam = j.at("isBottomTeam").get<bool>(); 
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.stats = j.at("stats").get<json>(); 
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer>>(); 
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}