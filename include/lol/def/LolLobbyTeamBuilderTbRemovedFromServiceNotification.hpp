#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification { 
    std::string reason;
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    j["reason"] = v.reason; 
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    v.reason = j.at("reason").get<std::string>(); 
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>(); 
  }
}