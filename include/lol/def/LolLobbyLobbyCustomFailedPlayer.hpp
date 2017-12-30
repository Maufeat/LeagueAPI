#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomFailedPlayer { 
    std::string summonerName;
    std::string reason;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomFailedPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["reason"] = v.reason; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomFailedPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}