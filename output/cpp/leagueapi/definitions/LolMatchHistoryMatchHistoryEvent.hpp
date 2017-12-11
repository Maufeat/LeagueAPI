#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryPosition.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent { /**/ 
    std::string monsterSubType;/**/
    uint16_t itemId;/**/
    uint16_t killerId;/**/
    std::string towerType;/**/
    uint16_t teamId;/**/
    uint16_t skillSlot;/**/
    LolMatchHistoryMatchHistoryPosition position;/**/
    uint64_t timestamp;/**/
    std::vector<uint16_t> assistingParticipantIds;/**/
    std::string type;/**/
    std::string laneType;/**/
    std::string monsterType;/**/
    uint16_t participantId;/**/
    uint16_t victimId;/**/
    std::string buildingType;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryEvent& v) { 
    j["monsterSubType"] = v.monsterSubType;
    j["itemId"] = v.itemId;
    j["killerId"] = v.killerId;
    j["towerType"] = v.towerType;
    j["teamId"] = v.teamId;
    j["skillSlot"] = v.skillSlot;
    j["position"] = v.position;
    j["timestamp"] = v.timestamp;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["type"] = v.type;
    j["laneType"] = v.laneType;
    j["monsterType"] = v.monsterType;
    j["participantId"] = v.participantId;
    j["victimId"] = v.victimId;
    j["buildingType"] = v.buildingType;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryEvent& v) { 
    v.monsterSubType = j.at("monsterSubType").get<std::string>(); 
    v.itemId = j.at("itemId").get<uint16_t>(); 
    v.killerId = j.at("killerId").get<uint16_t>(); 
    v.towerType = j.at("towerType").get<std::string>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.skillSlot = j.at("skillSlot").get<uint16_t>(); 
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.laneType = j.at("laneType").get<std::string>(); 
    v.monsterType = j.at("monsterType").get<std::string>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.victimId = j.at("victimId").get<uint16_t>(); 
    v.buildingType = j.at("buildingType").get<std::string>(); 
  }
} 