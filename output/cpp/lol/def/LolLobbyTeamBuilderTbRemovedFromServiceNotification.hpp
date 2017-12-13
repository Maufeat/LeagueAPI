#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp>
namespace lol {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification { 
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo;
    std::string reason; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
  j["backwardsTransitionInfo"] = v.backwardsTransitionInfo; 
  j["reason"] = v.reason; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
  v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>(); 
  v.reason = j.at("reason").get<std::string>(); 
  }
}