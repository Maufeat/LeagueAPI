#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftPFTEndOfGamePlayer.hpp>
namespace lol {
  struct LolPftPFTEndOfGameTeam { 
    std::vector<LolPftPFTEndOfGamePlayer> players;
    std::string memberStatusString;
    std::string fullId;
    bool isPlayerTeam;
    std::vector<int32_t> championBans;
    std::string name;
    int32_t teamId;
    std::string tag;
    bool isWinningTeam;
    json stats;
    bool isBottomTeam; 
  };
  void to_json(json& j, const LolPftPFTEndOfGameTeam& v) {
  j["players"] = v.players; 
  j["memberStatusString"] = v.memberStatusString; 
  j["fullId"] = v.fullId; 
  j["isPlayerTeam"] = v.isPlayerTeam; 
  j["championBans"] = v.championBans; 
  j["name"] = v.name; 
  j["teamId"] = v.teamId; 
  j["tag"] = v.tag; 
  j["isWinningTeam"] = v.isWinningTeam; 
  j["stats"] = v.stats; 
  j["isBottomTeam"] = v.isBottomTeam; 
  }
  void from_json(const json& j, LolPftPFTEndOfGameTeam& v) {
  v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer>>(); 
  v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
  v.fullId = j.at("fullId").get<std::string>(); 
  v.isPlayerTeam = j.at("isPlayerTeam").get<bool>(); 
  v.championBans = j.at("championBans").get<std::vector<int32_t>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.tag = j.at("tag").get<std::string>(); 
  v.isWinningTeam = j.at("isWinningTeam").get<bool>(); 
  v.stats = j.at("stats").get<json>(); 
  v.isBottomTeam = j.at("isBottomTeam").get<bool>(); 
  }
}