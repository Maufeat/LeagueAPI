#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolLobbyLobbyStatus { 
    bool isPracticeTool;
    bool isLeader;
    std::optional<std::string> lobbyId;
    bool isCustom;
    int32_t queueId;
    std::vector<uint64_t> invitedSummonerIds;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isSpectator; 
  };
  inline void to_json(json& j, const LolLobbyLobbyStatus& v) {
    j["isPracticeTool"] = v.isPracticeTool; 
    j["isLeader"] = v.isLeader; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["invitedSummonerIds"] = v.invitedSummonerIds; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["isSpectator"] = v.isSpectator; 
  }
  inline void from_json(const json& j, LolLobbyLobbyStatus& v) {
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
  }
}