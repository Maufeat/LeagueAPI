#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomFailedPlayer { 
    std::string reason;
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomFailedPlayer& v) {
    j["reason"] = v.reason; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomFailedPlayer& v) {
    v.reason = j.at("reason").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}