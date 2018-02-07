#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryEvent { 
    std::string type;
    uint64_t timestamp;
    uint16_t participantId;
    uint16_t teamId;
    uint16_t itemId;
    uint16_t killerId;
    uint16_t victimId;
    uint16_t skillSlot;
    LolMatchHistoryMatchHistoryPosition position;
    std::vector<uint16_t> assistingParticipantIds;
    std::string buildingType;
    std::string laneType;
    std::string towerType;
    std::string monsterType;
    std::string monsterSubType; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryEvent& v) {
    j["type"] = v.type; 
    j["timestamp"] = v.timestamp; 
    j["participantId"] = v.participantId; 
    j["teamId"] = v.teamId; 
    j["itemId"] = v.itemId; 
    j["killerId"] = v.killerId; 
    j["victimId"] = v.victimId; 
    j["skillSlot"] = v.skillSlot; 
    j["position"] = v.position; 
    j["assistingParticipantIds"] = v.assistingParticipantIds; 
    j["buildingType"] = v.buildingType; 
    j["laneType"] = v.laneType; 
    j["towerType"] = v.towerType; 
    j["monsterType"] = v.monsterType; 
    j["monsterSubType"] = v.monsterSubType; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryEvent& v) {
    v.type = j.at("type").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.itemId = j.at("itemId").get<uint16_t>(); 
    v.killerId = j.at("killerId").get<uint16_t>(); 
    v.victimId = j.at("victimId").get<uint16_t>(); 
    v.skillSlot = j.at("skillSlot").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>(); 
    v.buildingType = j.at("buildingType").get<std::string>(); 
    v.laneType = j.at("laneType").get<std::string>(); 
    v.towerType = j.at("towerType").get<std::string>(); 
    v.monsterType = j.at("monsterType").get<std::string>(); 
    v.monsterSubType = j.at("monsterSubType").get<std::string>(); 
  }
}