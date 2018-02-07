#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource { 
    std::string backwardsTransitionReason;
    std::vector<int32_t> slotIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
    j["slotIds"] = v.slotIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>(); 
  }
}