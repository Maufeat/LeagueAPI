#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentities { 
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player;
    uint16_t participantId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    j["player"] = v.player; 
    j["participantId"] = v.participantId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
  }
}