#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LcdsRemovalReason.hpp>"

namespace leagueapi {
  struct LcdsRemovedFromLobbyNotification { /**/ 
    LcdsRemovalReason removalReason;/**/
  };
  static void to_json(json& j, const LcdsRemovedFromLobbyNotification& v) { 
    j["removalReason"] = v.removalReason;
  }
  static void from_json(const json& j, LcdsRemovedFromLobbyNotification& v) { 
    v.removalReason = j.at("removalReason").get<LcdsRemovalReason>(); 
  }
} 