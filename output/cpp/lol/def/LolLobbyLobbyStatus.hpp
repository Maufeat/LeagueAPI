#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyQueueCustomGameSpectatorPolicy.hpp>
namespace lol {
  struct LolLobbyLobbyStatus { 
    std::optional<std::string> lobbyId;
    bool isCustom;
    bool isSpectator;
    std::vector<uint64_t> invitedSummonerIds;
    bool allowedPlayAgain;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isPracticeTool;
    bool isLeader;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds; 
  };
  void to_json(json& j, const LolLobbyLobbyStatus& v) {
  j["lobbyId"] = v.lobbyId; 
  j["isCustom"] = v.isCustom; 
  j["isSpectator"] = v.isSpectator; 
  j["invitedSummonerIds"] = v.invitedSummonerIds; 
  j["allowedPlayAgain"] = v.allowedPlayAgain; 
  j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  j["isPracticeTool"] = v.isPracticeTool; 
  j["isLeader"] = v.isLeader; 
  j["queueId"] = v.queueId; 
  j["memberSummonerIds"] = v.memberSummonerIds; 
  }
  void from_json(const json& j, LolLobbyLobbyStatus& v) {
  v.lobbyId = j.at("lobbyId").get<std::optional<std::string>>(); 
  v.isCustom = j.at("isCustom").get<bool>(); 
  v.isSpectator = j.at("isSpectator").get<bool>(); 
  v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
  v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
  v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
  v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
  v.isLeader = j.at("isLeader").get<bool>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
}