#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification { /**/ 
    std::string reason;/**/
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) { 
    j["reason"] = v.reason;
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) { 
    v.reason = j.at("reason").get<std::string>(); 
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>(); 
  }
} 