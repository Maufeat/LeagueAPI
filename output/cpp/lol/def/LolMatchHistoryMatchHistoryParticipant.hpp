#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryParticipantStatistics.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryTimeline.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryParticipant { 
    std::string highestAchievedSeasonTier;
    uint16_t spell2Id;
    uint16_t teamId;
    uint16_t participantId;
    LolMatchHistoryMatchHistoryTimeline timeline;
    uint16_t spell1Id;
    LolMatchHistoryMatchHistoryParticipantStatistics stats;
    int32_t championId; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryParticipant& v) {
  j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier; 
  j["spell2Id"] = v.spell2Id; 
  j["teamId"] = v.teamId; 
  j["participantId"] = v.participantId; 
  j["timeline"] = v.timeline; 
  j["spell1Id"] = v.spell1Id; 
  j["stats"] = v.stats; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryParticipant& v) {
  v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>(); 
  v.spell2Id = j.at("spell2Id").get<uint16_t>(); 
  v.teamId = j.at("teamId").get<uint16_t>(); 
  v.participantId = j.at("participantId").get<uint16_t>(); 
  v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline>(); 
  v.spell1Id = j.at("spell1Id").get<uint16_t>(); 
  v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}