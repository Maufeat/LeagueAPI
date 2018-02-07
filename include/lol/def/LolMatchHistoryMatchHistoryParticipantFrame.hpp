#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantFrame { 
    uint16_t participantId;
    LolMatchHistoryMatchHistoryPosition position;
    int32_t currentGold;
    int32_t totalGold;
    uint16_t level;
    uint32_t xp;
    uint16_t minionsKilled;
    uint16_t jungleMinionsKilled;
    uint16_t dominionScore;
    uint16_t teamScore; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["participantId"] = v.participantId; 
    j["position"] = v.position; 
    j["currentGold"] = v.currentGold; 
    j["totalGold"] = v.totalGold; 
    j["level"] = v.level; 
    j["xp"] = v.xp; 
    j["minionsKilled"] = v.minionsKilled; 
    j["jungleMinionsKilled"] = v.jungleMinionsKilled; 
    j["dominionScore"] = v.dominionScore; 
    j["teamScore"] = v.teamScore; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.currentGold = j.at("currentGold").get<int32_t>(); 
    v.totalGold = j.at("totalGold").get<int32_t>(); 
    v.level = j.at("level").get<uint16_t>(); 
    v.xp = j.at("xp").get<uint32_t>(); 
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>(); 
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>(); 
    v.dominionScore = j.at("dominionScore").get<uint16_t>(); 
    v.teamScore = j.at("teamScore").get<uint16_t>(); 
  }
}