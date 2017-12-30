#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryEvent { 
    uint16_t teamId;
    std::string monsterSubType;
    std::string towerType;
    LolMatchHistoryMatchHistoryPosition position;
    std::vector<uint16_t> assistingParticipantIds;
    std::string type;
    uint16_t participantId;
    uint16_t skillSlot;
    uint16_t itemId;
    std::string buildingType;
    uint64_t timestamp;
    std::string laneType;
    std::string monsterType;
    uint16_t victimId;
    uint16_t killerId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryEvent& v) {
    j["teamId"] = v.teamId; 
    j["monsterSubType"] = v.monsterSubType; 
    j["towerType"] = v.towerType; 
    j["position"] = v.position; 
    j["assistingParticipantIds"] = v.assistingParticipantIds; 
    j["type"] = v.type; 
    j["participantId"] = v.participantId; 
    j["skillSlot"] = v.skillSlot; 
    j["itemId"] = v.itemId; 
    j["buildingType"] = v.buildingType; 
    j["timestamp"] = v.timestamp; 
    j["laneType"] = v.laneType; 
    j["monsterType"] = v.monsterType; 
    j["victimId"] = v.victimId; 
    j["killerId"] = v.killerId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryEvent& v) {
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.monsterSubType = j.at("monsterSubType").get<std::string>(); 
    v.towerType = j.at("towerType").get<std::string>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.skillSlot = j.at("skillSlot").get<uint16_t>(); 
    v.itemId = j.at("itemId").get<uint16_t>(); 
    v.buildingType = j.at("buildingType").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.laneType = j.at("laneType").get<std::string>(); 
    v.monsterType = j.at("monsterType").get<std::string>(); 
    v.victimId = j.at("victimId").get<uint16_t>(); 
    v.killerId = j.at("killerId").get<uint16_t>(); 
  }
}