#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryPosition.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryEvent { 
    uint16_t skillSlot;
    uint16_t teamId;
    uint16_t victimId;
    uint16_t killerId;
    std::string monsterSubType;
    std::string buildingType;
    uint16_t participantId;
    std::string towerType;
    uint64_t timestamp;
    std::string type;
    std::string laneType;
    std::vector<uint16_t> assistingParticipantIds;
    uint16_t itemId;
    std::string monsterType;
    LolMatchHistoryMatchHistoryPosition position; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryEvent& v) {
  j["skillSlot"] = v.skillSlot; 
  j["teamId"] = v.teamId; 
  j["victimId"] = v.victimId; 
  j["killerId"] = v.killerId; 
  j["monsterSubType"] = v.monsterSubType; 
  j["buildingType"] = v.buildingType; 
  j["participantId"] = v.participantId; 
  j["towerType"] = v.towerType; 
  j["timestamp"] = v.timestamp; 
  j["type"] = v.type; 
  j["laneType"] = v.laneType; 
  j["assistingParticipantIds"] = v.assistingParticipantIds; 
  j["itemId"] = v.itemId; 
  j["monsterType"] = v.monsterType; 
  j["position"] = v.position; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryEvent& v) {
  v.skillSlot = j.at("skillSlot").get<uint16_t>(); 
  v.teamId = j.at("teamId").get<uint16_t>(); 
  v.victimId = j.at("victimId").get<uint16_t>(); 
  v.killerId = j.at("killerId").get<uint16_t>(); 
  v.monsterSubType = j.at("monsterSubType").get<std::string>(); 
  v.buildingType = j.at("buildingType").get<std::string>(); 
  v.participantId = j.at("participantId").get<uint16_t>(); 
  v.towerType = j.at("towerType").get<std::string>(); 
  v.timestamp = j.at("timestamp").get<uint64_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.laneType = j.at("laneType").get<std::string>(); 
  v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>(); 
  v.itemId = j.at("itemId").get<uint16_t>(); 
  v.monsterType = j.at("monsterType").get<std::string>(); 
  v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
  }
}