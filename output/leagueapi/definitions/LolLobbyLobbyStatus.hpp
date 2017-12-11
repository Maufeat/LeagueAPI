#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyQueueCustomGameSpectatorPolicy.hpp>"

namespace leagueapi {
  struct LolLobbyLobbyStatus { /**/ 
    int32_t queueId;/**/
    bool isSpectator;/**/
    std::vector<uint64_t> invitedSummonerIds;/**/
    bool allowedPlayAgain;/**/
    bool isPracticeTool;/**/
    std::optional<std::string> lobbyId;/**/
    std::vector<uint64_t> memberSummonerIds;/**/
    bool isCustom;/**/
    bool isLeader;/**/
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyStatus& v) { 
    j["queueId"] = v.queueId;
    j["isSpectator"] = v.isSpectator;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["isPracticeTool"] = v.isPracticeTool;
    j["lobbyId"] = v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }
  static void from_json(const json& j, LolLobbyLobbyStatus& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.lobbyId = j.at("lobbyId").get<std::optional<std::string>>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
  }
} 