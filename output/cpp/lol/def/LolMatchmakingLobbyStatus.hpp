#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingQueueCustomGameSpectatorPolicy.hpp>
namespace lol {
  struct LolMatchmakingLobbyStatus { 
    int32_t queueId;
    bool isSpectator;
    std::optional<std::string> lobbyId;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds;
    bool isCustom;
    bool isLeader;
    LolMatchmakingQueueCustomGameSpectatorPolicy customSpectatorPolicy; 
  };
  void to_json(json& j, const LolMatchmakingLobbyStatus& v) {
  j["queueId"] = v.queueId; 
  j["isSpectator"] = v.isSpectator; 
  j["lobbyId"] = v.lobbyId; 
  j["allowedPlayAgain"] = v.allowedPlayAgain; 
  j["memberSummonerIds"] = v.memberSummonerIds; 
  j["isCustom"] = v.isCustom; 
  j["isLeader"] = v.isLeader; 
  j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  }
  void from_json(const json& j, LolMatchmakingLobbyStatus& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.isSpectator = j.at("isSpectator").get<bool>(); 
  v.lobbyId = j.at("lobbyId").get<std::optional<std::string>>(); 
  v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
  v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  v.isCustom = j.at("isCustom").get<bool>(); 
  v.isLeader = j.at("isLeader").get<bool>(); 
  v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy>(); 
  }
}