#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomFailedPlayer { 
    uint64_t summonerId;
    std::string summonerName;
    std::string reason; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomFailedPlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomFailedPlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}