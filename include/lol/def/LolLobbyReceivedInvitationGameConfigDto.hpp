#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyReceivedInvitationGameConfigDto { 
    std::string gameMode;
    std::string gameMutator;
    int32_t queueId;
    int32_t mapId;
    std::string inviteGameType; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationGameConfigDto& v) {
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["queueId"] = v.queueId; 
    j["mapId"] = v.mapId; 
    j["inviteGameType"] = v.inviteGameType; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationGameConfigDto& v) {
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.inviteGameType = j.at("inviteGameType").get<std::string>(); 
  }
}