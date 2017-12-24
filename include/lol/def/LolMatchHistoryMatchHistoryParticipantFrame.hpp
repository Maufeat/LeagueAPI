#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantFrame { 
    uint16_t dominionScore;
    uint16_t participantId;
    uint16_t teamScore;
    int32_t currentGold;
    uint16_t minionsKilled;
    int32_t totalGold;
    uint32_t xp;
    uint16_t jungleMinionsKilled;
    LolMatchHistoryMatchHistoryPosition position;
    uint16_t level; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["dominionScore"] = v.dominionScore; 
    j["participantId"] = v.participantId; 
    j["teamScore"] = v.teamScore; 
    j["currentGold"] = v.currentGold; 
    j["minionsKilled"] = v.minionsKilled; 
    j["totalGold"] = v.totalGold; 
    j["xp"] = v.xp; 
    j["jungleMinionsKilled"] = v.jungleMinionsKilled; 
    j["position"] = v.position; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.dominionScore = j.at("dominionScore").get<uint16_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.teamScore = j.at("teamScore").get<uint16_t>(); 
    v.currentGold = j.at("currentGold").get<int32_t>(); 
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>(); 
    v.totalGold = j.at("totalGold").get<int32_t>(); 
    v.xp = j.at("xp").get<uint32_t>(); 
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.level = j.at("level").get<uint16_t>(); 
  }
}