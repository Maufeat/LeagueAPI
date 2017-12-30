#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantFrame { 
    int32_t currentGold;
    uint16_t dominionScore;
    uint16_t minionsKilled;
    uint16_t jungleMinionsKilled;
    uint16_t teamScore;
    LolMatchHistoryMatchHistoryPosition position;
    int32_t totalGold;
    uint32_t xp;
    uint16_t participantId;
    uint16_t level; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["currentGold"] = v.currentGold; 
    j["dominionScore"] = v.dominionScore; 
    j["minionsKilled"] = v.minionsKilled; 
    j["jungleMinionsKilled"] = v.jungleMinionsKilled; 
    j["teamScore"] = v.teamScore; 
    j["position"] = v.position; 
    j["totalGold"] = v.totalGold; 
    j["xp"] = v.xp; 
    j["participantId"] = v.participantId; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.currentGold = j.at("currentGold").get<int32_t>(); 
    v.dominionScore = j.at("dominionScore").get<uint16_t>(); 
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>(); 
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>(); 
    v.teamScore = j.at("teamScore").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.totalGold = j.at("totalGold").get<int32_t>(); 
    v.xp = j.at("xp").get<uint32_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.level = j.at("level").get<uint16_t>(); 
  }
}