#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryTimeline.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryParticipantStatistics.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipant { 
    uint16_t spell1Id;
    uint16_t teamId;
    LolMatchHistoryMatchHistoryTimeline timeline;
    uint16_t spell2Id;
    std::string highestAchievedSeasonTier;
    LolMatchHistoryMatchHistoryParticipantStatistics stats;
    int32_t championId;
    uint16_t participantId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryParticipant& v) {
    j["spell1Id"] = v.spell1Id; 
    j["teamId"] = v.teamId; 
    j["timeline"] = v.timeline; 
    j["spell2Id"] = v.spell2Id; 
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier; 
    j["stats"] = v.stats; 
    j["championId"] = v.championId; 
    j["participantId"] = v.participantId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryParticipant& v) {
    v.spell1Id = j.at("spell1Id").get<uint16_t>(); 
    v.teamId = j.at("teamId").get<uint16_t>(); 
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline>(); 
    v.spell2Id = j.at("spell2Id").get<uint16_t>(); 
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>(); 
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
  }
}