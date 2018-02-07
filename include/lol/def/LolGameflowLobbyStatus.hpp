#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolGameflowLobbyStatus { 
    int32_t queueId;
    bool isCustom;
    bool isPracticeTool;
    bool isLeader;
    bool isSpectator;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds;
    std::vector<uint64_t> invitedSummonerIds;
    std::optional<std::string> lobbyId;
    LolGameflowQueueCustomGameSpectatorPolicy customSpectatorPolicy; 
  };
  inline void to_json(json& j, const LolGameflowLobbyStatus& v) {
    j["queueId"] = v.queueId; 
    j["isCustom"] = v.isCustom; 
    j["isPracticeTool"] = v.isPracticeTool; 
    j["isLeader"] = v.isLeader; 
    j["isSpectator"] = v.isSpectator; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["invitedSummonerIds"] = v.invitedSummonerIds; 
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  }
  inline void from_json(const json& j, LolGameflowLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::optional<std::string>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolGameflowQueueCustomGameSpectatorPolicy>(); 
  }
}