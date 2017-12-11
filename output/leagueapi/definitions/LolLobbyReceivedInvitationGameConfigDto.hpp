#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyReceivedInvitationGameConfigDto { /**/ 
    int32_t queueId;/**/
    std::string gameMutator;/**/
    int32_t mapId;/**/
    std::string inviteGameType;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolLobbyReceivedInvitationGameConfigDto& v) { 
    j["queueId"] = v.queueId;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["inviteGameType"] = v.inviteGameType;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolLobbyReceivedInvitationGameConfigDto& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.inviteGameType = j.at("inviteGameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 