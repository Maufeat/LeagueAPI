#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryEvent { 
    uint64_t timestamp;
    uint16_t itemId;
    uint16_t killerId;
    std::string monsterSubType;
    std::string towerType;
    LolMatchHistoryMatchHistoryPosition position;
    uint16_t victimId;
    uint16_t skillSlot;
    std::string monsterType;
    std::vector<uint16_t> assistingParticipantIds;
    std::string buildingType;
    std::string laneType;
    std::string type;
    uint16_t participantId;
    uint16_t teamId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryEvent& v) {
    j["timestamp"] = v.timestamp; 
    j["itemId"] = v.itemId; 
    j["killerId"] = v.killerId; 
    j["monsterSubType"] = v.monsterSubType; 
    j["towerType"] = v.towerType; 
    j["position"] = v.position; 
    j["victimId"] = v.victimId; 
    j["skillSlot"] = v.skillSlot; 
    j["monsterType"] = v.monsterType; 
    j["assistingParticipantIds"] = v.assistingParticipantIds; 
    j["buildingType"] = v.buildingType; 
    j["laneType"] = v.laneType; 
    j["type"] = v.type; 
    j["participantId"] = v.participantId; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryEvent& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.itemId = j.at("itemId").get<uint16_t>(); 
    v.killerId = j.at("killerId").get<uint16_t>(); 
    v.monsterSubType = j.at("monsterSubType").get<std::string>(); 
    v.towerType = j.at("towerType").get<std::string>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.victimId = j.at("victimId").get<uint16_t>(); 
    v.skillSlot = j.at("skillSlot").get<uint16_t>(); 
    v.monsterType = j.at("monsterType").get<std::string>(); 
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>(); 
    v.buildingType = j.at("buildingType").get<std::string>(); 
    v.laneType = j.at("laneType").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
  }
}