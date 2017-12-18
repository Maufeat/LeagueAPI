#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyQueueRestrictionDto.hpp>
#include <lol/def/LolLobbyPlayerDto.hpp>
namespace lol {
  struct LolLobbyPartyNotificationEnvelopeDto { 
    std::optional<LolLobbyQueueRestrictionDto> queueRestriction;
    std::optional<LolLobbyPlayerDto> player; 
  };
  inline void to_json(json& j, const LolLobbyPartyNotificationEnvelopeDto& v) {
    if(v.queueRestriction)
      j["queueRestriction"] = *v.queueRestriction;
    if(v.player)
      j["player"] = *v.player;
  }
  inline void from_json(const json& j, LolLobbyPartyNotificationEnvelopeDto& v) {
    if(auto it = j.find("queueRestriction"); it != j.end() && !it->is_null())
      v.queueRestriction = it->get<std::optional<LolLobbyQueueRestrictionDto>>(); 
    if(auto it = j.find("player"); it != j.end() && !it->is_null())
      v.player = it->get<std::optional<LolLobbyPlayerDto>>(); 
  }
}