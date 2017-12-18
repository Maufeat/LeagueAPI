#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyReceivedInvitationGameConfigDto { 
    std::string gameMutator;
    std::string inviteGameType;
    std::string gameMode;
    int32_t queueId;
    int32_t mapId; 
  };
  inline void to_json(json& j, const LolLobbyReceivedInvitationGameConfigDto& v) {
    j["gameMutator"] = v.gameMutator; 
    j["inviteGameType"] = v.inviteGameType; 
    j["gameMode"] = v.gameMode; 
    j["queueId"] = v.queueId; 
    j["mapId"] = v.mapId; 
  }
  inline void from_json(const json& j, LolLobbyReceivedInvitationGameConfigDto& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.inviteGameType = j.at("inviteGameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
  }
}