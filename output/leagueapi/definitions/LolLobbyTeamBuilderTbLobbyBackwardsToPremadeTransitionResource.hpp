#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource { /**/ 
    std::string backwardsTransitionReason;/**/
    std::vector<int32_t> slotIds;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) { 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["slotIds"] = v.slotIds;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) { 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>(); 
  }
} 