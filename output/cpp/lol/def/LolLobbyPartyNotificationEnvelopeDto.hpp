#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPlayerDto.hpp>
#include <lol/def/LolLobbyQueueRestrictionDto.hpp>
namespace lol {
  struct LolLobbyPartyNotificationEnvelopeDto { 
    std::optional<LolLobbyQueueRestrictionDto> queueRestriction;
    std::optional<LolLobbyPlayerDto> player; 
  };
  void to_json(json& j, const LolLobbyPartyNotificationEnvelopeDto& v) {
  j["queueRestriction"] = v.queueRestriction; 
  j["player"] = v.player; 
  }
  void from_json(const json& j, LolLobbyPartyNotificationEnvelopeDto& v) {
  v.queueRestriction = j.at("queueRestriction").get<std::optional<LolLobbyQueueRestrictionDto>>(); 
  v.player = j.at("player").get<std::optional<LolLobbyPlayerDto>>(); 
  }
}