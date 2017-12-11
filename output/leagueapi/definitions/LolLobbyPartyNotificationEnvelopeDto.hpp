#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyQueueRestrictionDto.hpp>"
#include "<leagueapi/definitions/LolLobbyPlayerDto.hpp>"

namespace leagueapi {
  struct LolLobbyPartyNotificationEnvelopeDto { /**/ 
    std::optional<LolLobbyPlayerDto> player;/**/
    std::optional<LolLobbyQueueRestrictionDto> queueRestriction;/**/
  };
  static void to_json(json& j, const LolLobbyPartyNotificationEnvelopeDto& v) { 
    j["player"] = v.player;
    j["queueRestriction"] = v.queueRestriction;
  }
  static void from_json(const json& j, LolLobbyPartyNotificationEnvelopeDto& v) { 
    v.player = j.at("player").get<std::optional<LolLobbyPlayerDto>>(); 
    v.queueRestriction = j.at("queueRestriction").get<std::optional<LolLobbyQueueRestrictionDto>>(); 
  }
} 