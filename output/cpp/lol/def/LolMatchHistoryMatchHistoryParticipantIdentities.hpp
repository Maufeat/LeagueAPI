#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantIdentities { 
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player;
    uint16_t participantId; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    j["player"] = v.player; 
    j["participantId"] = v.participantId; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
  }
}