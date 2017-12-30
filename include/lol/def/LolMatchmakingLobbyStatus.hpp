#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolMatchmakingLobbyStatus { 
    bool isSpectator;
    bool isCustom;
    std::optional<std::string> lobbyId;
    std::vector<uint64_t> memberSummonerIds;
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool allowedPlayAgain;
    int32_t queueId;
    bool isLeader; 
  };
  inline void to_json(json& j, const LolMatchmakingLobbyStatus& v) {
    j["isSpectator"] = v.isSpectator; 
    j["isCustom"] = v.isCustom; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["queueId"] = v.queueId; 
    j["isLeader"] = v.isLeader; 
  }
  inline void from_json(const json& j, LolMatchmakingLobbyStatus& v) {
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
  }
}