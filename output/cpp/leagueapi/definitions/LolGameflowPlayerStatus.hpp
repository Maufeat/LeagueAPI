#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameflowLobbyStatus.hpp>

namespace leagueapi {
  struct LolGameflowPlayerStatus { /**/ 
    std::optional<LolGameflowLobbyStatus> currentLobbyStatus;/**/
    std::optional<LolGameflowLobbyStatus> lastQueuedLobbyStatus;/**/
    bool canInviteOthersAtEog;/**/
  };
  static void to_json(json& j, const LolGameflowPlayerStatus& v) { 
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
    j["canInviteOthersAtEog"] = v.canInviteOthersAtEog;
  }
  static void from_json(const json& j, LolGameflowPlayerStatus& v) { 
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolGameflowLobbyStatus>>(); 
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolGameflowLobbyStatus>>(); 
    v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
} 