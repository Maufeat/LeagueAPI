#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPlayerDto.hpp"
namespace lol {
  struct LolLobbyPartyNotificationEnvelopeDto { 
    std::optional<LolLobbyPlayerDto> player;
    std::optional<LolLobbyQueueRestrictionDto> queueRestriction; 
  };
  inline void to_json(json& j, const LolLobbyPartyNotificationEnvelopeDto& v) {
    if(v.player)
      j["player"] = *v.player;
    if(v.queueRestriction)
      j["queueRestriction"] = *v.queueRestriction;
  }
  inline void from_json(const json& j, LolLobbyPartyNotificationEnvelopeDto& v) {
    if(auto it = j.find("player"); it != j.end() && !it->is_null())
      v.player = it->get<std::optional<LolLobbyPlayerDto>>(); 
    if(auto it = j.find("queueRestriction"); it != j.end() && !it->is_null())
      v.queueRestriction = it->get<std::optional<LolLobbyQueueRestrictionDto>>(); 
  }
}