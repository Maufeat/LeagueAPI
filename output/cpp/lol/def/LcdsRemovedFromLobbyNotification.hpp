#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsRemovalReason.hpp>
namespace lol {
  struct LcdsRemovedFromLobbyNotification { 
    LcdsRemovalReason removalReason; 
  };
  void to_json(json& j, const LcdsRemovedFromLobbyNotification& v) {
    j["removalReason"] = v.removalReason; 
  }
  void from_json(const json& j, LcdsRemovedFromLobbyNotification& v) {
    v.removalReason = j.at("removalReason").get<LcdsRemovalReason>(); 
  }
}