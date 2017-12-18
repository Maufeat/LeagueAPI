#pragma once
#include "../base_def.hpp" 
#include "LcdsRemovalReason.hpp"
namespace lol {
  struct LcdsRemovedFromLobbyNotification { 
    LcdsRemovalReason removalReason; 
  };
  inline void to_json(json& j, const LcdsRemovedFromLobbyNotification& v) {
    j["removalReason"] = v.removalReason; 
  }
  inline void from_json(const json& j, LcdsRemovedFromLobbyNotification& v) {
    v.removalReason = j.at("removalReason").get<LcdsRemovalReason>(); 
  }
}