#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolGameflowLobbyStatus { 
    bool isSpectator;
    bool isCustom;
    std::vector<uint64_t> invitedSummonerIds;
    std::vector<uint64_t> memberSummonerIds;
    bool isPracticeTool;
    LolGameflowQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    std::optional<std::string> lobbyId;
    bool allowedPlayAgain;
    int32_t queueId;
    bool isLeader; 
  };
  inline void to_json(json& j, const LolGameflowLobbyStatus& v) {
    j["isSpectator"] = v.isSpectator; 
    j["isCustom"] = v.isCustom; 
    j["invitedSummonerIds"] = v.invitedSummonerIds; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["isPracticeTool"] = v.isPracticeTool; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["queueId"] = v.queueId; 
    j["isLeader"] = v.isLeader; 
  }
  inline void from_json(const json& j, LolGameflowLobbyStatus& v) {
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolGameflowQueueCustomGameSpectatorPolicy>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
  }
}