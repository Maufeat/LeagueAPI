#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification { 
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo;
    std::string reason; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}