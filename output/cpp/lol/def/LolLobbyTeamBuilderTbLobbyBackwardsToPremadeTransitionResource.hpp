#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource { 
    std::vector<int32_t> slotIds;
    std::string backwardsTransitionReason; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    j["slotIds"] = v.slotIds; 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
}