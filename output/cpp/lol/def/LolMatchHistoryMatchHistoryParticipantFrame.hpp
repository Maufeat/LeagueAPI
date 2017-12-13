#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryPosition.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipantFrame { 
    uint16_t level;
    uint16_t minionsKilled;
    int32_t totalGold;
    uint32_t xp;
    int32_t currentGold;
    uint16_t teamScore;
    uint16_t jungleMinionsKilled;
    uint16_t participantId;
    uint16_t dominionScore;
    LolMatchHistoryMatchHistoryPosition position; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
  j["level"] = v.level; 
  j["minionsKilled"] = v.minionsKilled; 
  j["totalGold"] = v.totalGold; 
  j["xp"] = v.xp; 
  j["currentGold"] = v.currentGold; 
  j["teamScore"] = v.teamScore; 
  j["jungleMinionsKilled"] = v.jungleMinionsKilled; 
  j["participantId"] = v.participantId; 
  j["dominionScore"] = v.dominionScore; 
  j["position"] = v.position; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
  v.level = j.at("level").get<uint16_t>(); 
  v.minionsKilled = j.at("minionsKilled").get<uint16_t>(); 
  v.totalGold = j.at("totalGold").get<int32_t>(); 
  v.xp = j.at("xp").get<uint32_t>(); 
  v.currentGold = j.at("currentGold").get<int32_t>(); 
  v.teamScore = j.at("teamScore").get<uint16_t>(); 
  v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>(); 
  v.participantId = j.at("participantId").get<uint16_t>(); 
  v.dominionScore = j.at("dominionScore").get<uint16_t>(); 
  v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
  }
}