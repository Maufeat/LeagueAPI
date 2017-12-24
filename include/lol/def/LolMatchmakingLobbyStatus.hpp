#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolMatchmakingLobbyStatus { 
    bool isLeader;
    std::vector<uint64_t> memberSummonerIds;
    std::optional<std::string> lobbyId;
    bool isSpectator;
    bool isCustom;
    int32_t queueId;
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool allowedPlayAgain; 
  };
  inline void to_json(json& j, const LolMatchmakingLobbyStatus& v) {
    j["isLeader"] = v.isLeader; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isSpectator"] = v.isSpectator; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
  }
  inline void from_json(const json& j, LolMatchmakingLobbyStatus& v) {
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
  }
}