#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp>"

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentities { /**/ 
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player;/**/
    uint16_t participantId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) { 
    j["player"] = v.player;
    j["participantId"] = v.participantId;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) { 
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
  }
} 