#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipant { 
    LolMatchHistoryMatchHistoryTimeline timeline;
    uint16_t spell1Id;
    int32_t championId;
    uint16_t participantId;
    std::string highestAchievedSeasonTier;
    uint16_t teamId;
    LolMatchHistoryMatchHistoryParticipantStatistics stats;
    uint16_t spell2Id; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipant& v) {
    j["timeline"] = v.timeline; 
    j["spell1Id"] = v.spell1Id; 
    j["championId"] = v.championId; 
    j["participantId"] = v.participantId; 
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier; 
    j["teamId"] = v.teamId; 
    j["stats"] = v.stats; 
    j["spell2Id"] = v.spell2Id; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipant& v) {
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline>(); 
    v.spell1Id = j.at("spell1Id").get<uint16_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics>(); 
    v.spell2Id = j.at("spell2Id").get<uint16_t>(); 
  }
}