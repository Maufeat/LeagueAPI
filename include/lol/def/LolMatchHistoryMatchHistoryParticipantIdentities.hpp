#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentities { 
    uint16_t participantId;
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    j["participantId"] = v.participantId; 
    j["player"] = v.player; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>(); 
  }
}