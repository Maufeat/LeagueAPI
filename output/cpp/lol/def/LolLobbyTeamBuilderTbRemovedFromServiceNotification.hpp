#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp>
namespace lol {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification { 
    std::string reason;
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
  j["reason"] = v.reason; 
  j["backwardsTransitionInfo"] = v.backwardsTransitionInfo; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
  v.reason = j.at("reason").get<std::string>(); 
  v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>(); 
  }
}