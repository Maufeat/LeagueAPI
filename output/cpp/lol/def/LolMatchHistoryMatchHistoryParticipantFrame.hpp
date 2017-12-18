#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryPosition.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantFrame { 
    int32_t totalGold;
    uint16_t level;
    uint16_t dominionScore;
    uint16_t minionsKilled;
    int32_t currentGold;
    uint16_t teamScore;
    uint32_t xp;
    uint16_t jungleMinionsKilled;
    LolMatchHistoryMatchHistoryPosition position;
    uint16_t participantId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["totalGold"] = v.totalGold; 
    j["level"] = v.level; 
    j["dominionScore"] = v.dominionScore; 
    j["minionsKilled"] = v.minionsKilled; 
    j["currentGold"] = v.currentGold; 
    j["teamScore"] = v.teamScore; 
    j["xp"] = v.xp; 
    j["jungleMinionsKilled"] = v.jungleMinionsKilled; 
    j["position"] = v.position; 
    j["participantId"] = v.participantId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.totalGold = j.at("totalGold").get<int32_t>(); 
    v.level = j.at("level").get<uint16_t>(); 
    v.dominionScore = j.at("dominionScore").get<uint16_t>(); 
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>(); 
    v.currentGold = j.at("currentGold").get<int32_t>(); 
    v.teamScore = j.at("teamScore").get<uint16_t>(); 
    v.xp = j.at("xp").get<uint32_t>(); 
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
  }
}