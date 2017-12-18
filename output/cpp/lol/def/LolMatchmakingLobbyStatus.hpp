#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolMatchmakingLobbyStatus { 
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isCustom;
    bool isSpectator;
    bool allowedPlayAgain;
    std::optional<std::string> lobbyId;
    bool isLeader;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds; 
  };
  inline void to_json(json& j, const LolMatchmakingLobbyStatus& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["isCustom"] = v.isCustom; 
    j["isSpectator"] = v.isSpectator; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isLeader"] = v.isLeader; 
    j["queueId"] = v.queueId; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
  }
  inline void from_json(const json& j, LolMatchmakingLobbyStatus& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
}