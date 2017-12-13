#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPlayerDto.hpp>
#include <lol/def/LolLobbyQueueRestrictionDto.hpp>
namespace lol {
  struct LolLobbyPartyNotificationEnvelopeDto { 
    std::optional<LolLobbyPlayerDto> player;
    std::optional<LolLobbyQueueRestrictionDto> queueRestriction; 
  };
  void to_json(json& j, const LolLobbyPartyNotificationEnvelopeDto& v) {
  j["player"] = v.player; 
  j["queueRestriction"] = v.queueRestriction; 
  }
  void from_json(const json& j, LolLobbyPartyNotificationEnvelopeDto& v) {
  v.player = j.at("player").get<std::optional<LolLobbyPlayerDto>>(); 
  v.queueRestriction = j.at("queueRestriction").get<std::optional<LolLobbyQueueRestrictionDto>>(); 
  }
}