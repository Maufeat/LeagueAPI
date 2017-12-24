#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyReceivedInvitationGameConfigDto { 
    std::string inviteGameType;
    std::string gameMutator;
    int32_t mapId;
    std::string gameMode;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationGameConfigDto& v) {
    j["inviteGameType"] = v.inviteGameType; 
    j["gameMutator"] = v.gameMutator; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationGameConfigDto& v) {
    v.inviteGameType = j.at("inviteGameType").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}