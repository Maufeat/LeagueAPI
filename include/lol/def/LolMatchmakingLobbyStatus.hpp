#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolMatchmakingLobbyStatus { 
    int32_t queueId;
    bool isCustom;
    bool isLeader;
    bool isSpectator;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds;
    std::optional<std::string> lobbyId;
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy; 
  };
  inline void to_json(json& j, const LolMatchmakingLobbyStatus& v) {
    j["queueId"] = v.queueId; 
    j["isCustom"] = v.isCustom; 
    j["isLeader"] = v.isLeader; 
    j["isSpectator"] = v.isSpectator; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  }
  inline void from_json(const json& j, LolMatchmakingLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>(); 
  }
}