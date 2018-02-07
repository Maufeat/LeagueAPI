#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEndOfGamePlayer.hpp"
namespace lol {
  struct LolPftPFTEndOfGameTeam { 
    json stats;
    std::vector<LolPftPFTEndOfGamePlayer> players;
    std::string memberStatusString;
    std::string name;
    std::string tag;
    std::string fullId;
    int32_t teamId;
    bool isBottomTeam;
    bool isPlayerTeam;
    bool isWinningTeam;
    std::vector<int32_t> championBans; 
  };
  inline void to_json(json& j, const LolPftPFTEndOfGameTeam& v) {
    j["stats"] = v.stats; 
    j["players"] = v.players; 
    j["memberStatusString"] = v.memberStatusString; 
    j["name"] = v.name; 
    j["tag"] = v.tag; 
    j["fullId"] = v.fullId; 
    j["teamId"] = v.teamId; 
    j["isBottomTeam"] = v.isBottomTeam; 
    j["isPlayerTeam"] = v.isPlayerTeam; 
    j["isWinningTeam"] = v.isWinningTeam; 
    j["championBans"] = v.championBans; 
  }
  inline void from_json(const json& j, LolPftPFTEndOfGameTeam& v) {
    v.stats = j.at("stats").get<json>(); 
    v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer>>(); 
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.fullId = j.at("fullId").get<std::string>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.isBottomTeam = j.at("isBottomTeam").get<bool>(); 
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>(); 
    v.isWinningTeam = j.at("isWinningTeam").get<bool>(); 
    v.championBans = j.at("championBans").get<std::vector<int32_t>>(); 
  }
}